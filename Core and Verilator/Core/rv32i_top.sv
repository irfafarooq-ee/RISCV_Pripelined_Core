module rv32i_top(
  input         clk_i,
  input         resetn_i,
  output        illegal_inst_o,
  output [31:0] imem_addr_o,
  input  [31:0] imem_inst_i,
  output [31:0] mem_addr_o,
  output [31:0] mem_dat_o,
  input  [31:0] mem_dat_i,
  output        mem_write_o,
  output [3:0]  mem_wstrb_o,
  output        mem_read_o,
  input         mem_ack_i
);
    
    //To sunchronize with the lab design
    wire clk = clk_i;
    wire rst = resetn_i;
     
    // Instruction Fetch (Stage 1)
    wire [31:0] dataR, inc_value, dmem_out, alu_out, pc_in;
    wire [31:0] data1, data2;
    wire [4:0]  rs1, rs2, rsW;
    wire [2:0]  funct3, inst_type;
    wire [1:0]  WBSel;
    wire [3:0]  ALUSel;
    wire        Eq, Lt, BSel, RegWEn, MemRW, JSel, BrUn, pc_sel, PCWrite;
    wire        mux_en, IFWrite;
    
    //Instruction Decode (Stage 2)
    wire [31:0] pc_id;
    wire [31:0] inst_id;
    
    //Instruction Execute (Stage 3)
    wire        BrUn_ex, JSel_ex, BSel_ex, MemRW_ex, RegWEn_ex;
    wire        flush, Eq_ex, Lt_ex;
    wire [2:0]  inst_type_ex;
    wire [3:0]  ALUSel_ex;
    wire [1:0]  WBSel_ex;
    wire [31:0] pc_ex;
    wire [31:0] data1_ex, data2_ex;
    wire [31:0] immediate_ex;
    wire [31:0] inst_ex;
    
    //Memory (Stage 4)
    wire [31:0] data1_mem, data2_mem, alu_mem, inst_mem, pc_mem;
    wire        MemRW_mem, RegWEn_mem, pc_sel_mem;
    wire [1:0]  WBSel_mem;
    
    //Write Back (Stage 5)
    wire        MemRW_wb, RegWEn_wb;
    wire [1:0]  WBSel_wb;
    wire [31:0] pc_adder, pc_wb, alu_wb, dmem_wb, inst_wb, data1_wb, data2_wb, mem_dat_wb;
    reg  [31:0] mux2_out;
    
    assign pc_adder = imem_addr_o + 4;
    
    // Program Counter (PCWrite expected to be driven by hazard unit)
    program_counter pc(
        .clk(clk), .rst(rst), .PCWrite(PCWrite),
        .inc_value(pc_in),
        .pc(imem_addr_o)
    );   
    
    /*
    // Instruction Memory
    inst_mem im(
        .clk(clk),
        .addr(addr),
        .dataR(dataR)
    );
    */
    
    // When IFWrite==0, stall IF by feeding previous IF/ID contents back as inputs
    wire [31:0] addr_if  = (IFWrite) ? imem_addr_o : pc_id;
    wire [31:0] dataR_if = (IFWrite) ? imem_inst_i : inst_id;

    // Instruction Fetch (Stage 1) - IF/ID pipeline registers
    pc_pipe_reg IF_1(
        .clk(clk),
        .rst(flush),          // flush clears during branch/exception
        .data_in(addr_if),
        .data_out(pc_id)
    );
    
    pipe_reg IF_2(
        .clk(clk),
        .rst(flush),
        .data_in(dataR_if),
        .data_out(inst_id)
    );
    
    // Control Unit (works on ID stage instruction)
    control_unit cu(
        .instruction(inst_id),
        .inst_type(inst_type), 
        .BrUn(BrUn),
        .JSel(JSel),
        .BSel(BSel),
        .ALUSel(ALUSel),
        .MemRW(MemRW),
        .RegWEn(RegWEn),
        .WBSel(WBSel),
        .illegal_inst(illegal_inst_o)
    );
    
    // Hazard MUX adjustments already present (mux_en stalls EX by injecting NOPs)
    wire [3:0] ALUSel_muxed;
    wire [1:0] WBSel_muxed;
    wire       RegWEn_muxed, MemRW_muxed;
    
    assign ALUSel_muxed = (mux_en) ? 4'd11    : ALUSel;      // ALU_NOP
    assign RegWEn_muxed = (mux_en) ? 1'b0     : RegWEn;
    assign MemRW_muxed  = (mux_en) ? 1'b0     : MemRW;
    assign WBSel_muxed  = (mux_en) ? 2'b01    : WBSel;
    

    // Instruction field extraction (from IF/ID)
    assign rs1 = inst_id[19:15];
    assign rs2 = inst_id[24:20];
    
    // Register File
    reg_file rf( 
        .clk(clk), .rst(rst),
        .RegWEn(RegWEn_wb),
        .rs1(rs1), .rs2(rs2), .rsW(rsW), 
        .dataW(mux2_out), 
        .data1(data1), .data2(data2) 
    ); 

    wire [31:0] immediate;
    
    // Immediate Generator (operates on IF/ID instruction)
    imm_gen ig(
        .instruction(inst_id),
        .inst_type(inst_type),
        .immediate(immediate)
    );
    
    // Hazard Detection (detects load-use hazards and controls IF/ID/PC writes)
    hazard_detection HD( 
        .opcode(inst_ex[6:0]),
        .rs1(inst_id[19:15]), .rs2(inst_id[24:20]), .rd(inst_ex[11:7]),
        .RegWEn(RegWEn_ex),
        .mux_en(mux_en), .IFWrite(IFWrite), .PCWrite(PCWrite)
    );
    
    //Branch Computation (operates on ID/EX registered operands)
    branch_comp branch(
        .opcode(inst_ex[6:0]),
        .op1(alu1), .op2(alu2),
        .BrUn(BrUn),
        .Eq(Eq), .Lt(Lt)
    );
    
    //Instruction Execution (Stage 2) - ID/EX pipeline registers
    pipe_reg IE_1(
        .clk(clk),
        .rst(flush),
        .data_in(pc_id),
        .data_out(pc_ex)
    ); 
    
    pipe_reg IE_2(
        .clk(clk),
        .rst(flush),
        .data_in(data1),
        .data_out(data1_ex)
    );
    
    pipe_reg IE_3(
        .clk(clk),
        .rst(flush),
        .data_in(data2),
        .data_out(data2_ex)
    );
    
    pipe_reg IE_4(
        .clk(clk),
        .rst(flush),
        .data_in(immediate),
        .data_out(immediate_ex)
    );
    
    pipe_reg IE_5(
        .clk(clk),
        .rst(flush),
        .data_in(inst_id),
        .data_out(inst_ex)
    );                          
                                                    
    pipe_reg #(.WIDTH(1)) IE_6(     
        .clk(clk),                  
        .rst(flush),                  
        .data_in(BrUn),             
        .data_out(BrUn_ex)          
    );                              
                                        
    pipe_reg #(.WIDTH(1)) IE_7(     
        .clk(clk),                  
        .rst(flush),                  
        .data_in(JSel),             
        .data_out(JSel_ex)          
    );                              
                                        
    pipe_reg #(.WIDTH(1)) IE_8(     
        .clk(clk),                  
        .rst(flush),                  
        .data_in(BSel),             
        .data_out(BSel_ex)          
    );                              
    
    pipe_reg #(.WIDTH(1)) IE_9(   
        .clk(clk),                 
        .rst(flush),                 
        .data_in(MemRW_muxed),           
        .data_out(MemRW_ex)        
    );  
                                      
    pipe_reg #(.WIDTH(4)) IE_10(   
        .clk(clk),                 
        .rst(flush),                 
        .data_in(ALUSel_muxed),          
        .data_out(ALUSel_ex)       
    );                             
    
    pipe_reg #(.WIDTH(2)) IE_11(
        .clk(clk),
        .rst(flush),
        .data_in(WBSel_muxed),
        .data_out(WBSel_ex)
   );
    
    pipe_reg #(.WIDTH(1)) IE_12(
     .clk(clk),
     .rst(flush),
     .data_in(RegWEn_muxed),
     .data_out(RegWEn_ex)
    );
    
    pipe_reg #(.WIDTH(1)) IE_13(
     .clk(clk),
     .rst(flush),
     .data_in(Eq),
     .data_out(Eq_ex)
    );
    
    pipe_reg #(.WIDTH(1)) IE_14(
     .clk(clk),
     .rst(flush),
     .data_in(Lt),
     .data_out(Lt_ex)
    );
    
    reg [31:0] alu1, alu2;

    //Flush Logic: produces 'flush' when branch/jump taken in EX stage
    Flush_regs FR(
        .pc_sel(pc_sel), .clk(clk), .rst(rst),
        .flush(flush)
    );
    
    //Branch Control (ID stage) -> determines if branch condition will be checked in EX
    Branch_Control BC (
        .instruction(inst_ex),
        .Eq(Eq),
        .Lt(Lt),
        .pc_sel(pc_sel)
    );
            
    //Forward Logic (generate forwarding control signals)
    wire [1:0] fwd_a, fwd_b;
    
    fwd_logic FL(
        .rs1_ex(inst_ex[19:15]), .rs2_ex(inst_ex[24:20]),
        .rd_mem(inst_mem[11:7]), .rd_wb(inst_wb[11:7]),
        .RegWEn_mem(RegWEn_mem), .RegWEn_wb(RegWEn_wb),
        .fwd_a(fwd_a), .fwd_b(fwd_b)
    );
    
    //ALU Input1 Mux (data1 or pc output) with forwarding
    // Standard forwarding encoding assumed:
    //   2'b00 -> NO_FORWARD   (use EX-stage register value)
    //   2'b01 -> FORWARD_MEM  (use alu_mem)
    //   2'b10 -> FORWARD_WB   (use mux2_out)
    reg [31:0] alu_in2, alu_in1;
    
    always_comb begin
        case(fwd_a)
            2'b00: alu1 = data1_ex;    // no forward, use EX-stage value
            2'b01: alu1 = mem_addr_o;  // forward from MEM (ALU result)
            2'b10: alu1 = mux2_out;    // forward from WB (writeback data)
            default: alu1 = data1_ex;
        endcase    
    end
    
    always_comb begin
        if(JSel_ex)
            alu_in1 = pc_ex;
        else 
            alu_in1 = alu1;
    end
    
    // ALU Input2 Mux (data2 vs immediate) with forwarding
    always_comb begin
        case(fwd_b)
            2'b00: alu2 = data2_ex;    // no forward
            2'b01: alu2 = mem_addr_o;  // forward from MEM
            2'b10: alu2 = mux2_out;    // forward from WB
            default: alu2 = data2_ex;
        endcase    
    end

    always_comb begin
        if(BSel_ex)
            alu_in2 = immediate_ex;
        else 
            alu_in2 = alu2;
    end    
    
    // ALU (EX stage)
    alu_logic alu( 
        .data1(alu_in1), .data2(alu_in2), 
        .ALUSel(ALUSel_ex), 
        .result(alu_out)
    );
    
    //Memory (Stage 3) - pipeline registers EX->MEM
    pipe_reg MEM_1(
        .clk(clk),
        .rst(rst),
        .data_in(pc_ex),
        .data_out(pc_mem)
    );
    
    pipe_reg MEM_2(
        .clk(clk),
        .rst(rst),
        .data_in(alu_out),
        .data_out(mem_addr_o)
    );
    
    pipe_reg MEM_3(
        .clk(clk),
        .rst(rst),
        .data_in(alu2),
        .data_out(mem_dat_o)
    );
    
    pipe_reg MEM_4(
        .clk(clk),
        .rst(rst),
        .data_in(inst_ex),
        .data_out(inst_mem)
    );
    
    pipe_reg #(.WIDTH(1)) MEM_5(  
        .clk(clk),                
        .rst(rst),                
        .data_in(MemRW_ex),       
        .data_out(MemRW_mem)      
    );                                                    
                                  
    pipe_reg #(.WIDTH(2)) MEM_6(  
        .clk(clk),                
        .rst(rst),                
        .data_in(WBSel_ex),       
        .data_out(WBSel_mem)      
    );
         
    pipe_reg #(.WIDTH(1)) MEM_7(  
        .clk(clk),                
        .rst(rst),                
        .data_in(RegWEn_ex),       
        .data_out(RegWEn_mem)      
    );
    
    pipe_reg #(.WIDTH(1)) MEM_8(  
        .clk(clk),                
        .rst(rst),                
        .data_in(pc_sel),       
        .data_out(pc_sel_mem)      
    );

    pipe_reg MEM_9(
        .clk(clk),
        .rst(rst),
        .data_in(data1_ex),
        .data_out(data1_mem)
    );
    
    pipe_reg MEM_10(
        .clk(clk),
        .rst(rst),
        .data_in(data2_ex),
        .data_out(data2_mem)
    );
    
    assign funct3 = inst_mem[14:12];
                 
    // DMEM
    /*
    data_mem dm(
    .clk(clk), .rst(rst),
    .MemRW(MemRW_mem),
    .funct3(funct3),
    .addr(alu_mem),
    .dataW(data2_mem),
    .dataR(dmem_out)
    );
    */
    
    //Catering Load instruction inside MEM Stage
    assign mem_write_o = MemRW_mem;
    assign mem_read_o  = ~MemRW_mem;
    
    reg  [31:0] load_result;
    wire [1:0]  byte_offset = mem_addr_o[1:0];

    // ---------------------------
    // READ (ASYNC)
    // ---------------------------
    always_comb begin
        case (funct3)

            //---------------------------------------
            // LB - Load Byte (sign-extend)
            //---------------------------------------
            3'b000: begin
                case(byte_offset)
                    2'b00: load_result = {{24{mem_dat_i[7]}},  mem_dat_i[7:0]};
                    2'b01: load_result = {{24{mem_dat_i[15]}}, mem_dat_i[15:8]};
                    2'b10: load_result = {{24{mem_dat_i[23]}}, mem_dat_i[23:16]};
                    2'b11: load_result = {{24{mem_dat_i[31]}}, mem_dat_i[31:24]};
                endcase
            end

            //---------------------------------------
            // LBU - Load Byte Unsigned
            //---------------------------------------
            3'b100: begin
                case(byte_offset)
                    2'b00: load_result = {24'b0, mem_dat_i[7:0]};
                    2'b01: load_result = {24'b0, mem_dat_i[15:8]};
                    2'b10: load_result = {24'b0, mem_dat_i[23:16]};
                    2'b11: load_result = {24'b0, mem_dat_i[31:24]};
                endcase
            end

            //---------------------------------------
            // LH - Load Halfword (sign-extend)
            //---------------------------------------
            3'b001: begin
                if (byte_offset[1] == 1'b0)
                    load_result = {{16{mem_dat_i[15]}}, mem_dat_i[15:0]};
                else
                    load_result = {{16{mem_dat_i[31]}}, mem_dat_i[31:16]};
            end

            //---------------------------------------
            // LHU - Load Halfword Unsigned
            //---------------------------------------
            3'b101: begin
                if (byte_offset[1] == 1'b0)
                    load_result = {16'b0, mem_dat_i[15:0]};
                else
                    load_result = {16'b0, mem_dat_i[31:16]};
            end

            //---------------------------------------
            // LW - Load Word
            //---------------------------------------
            3'b010: load_result = mem_dat_i;

            default: load_result = 32'b0;
        endcase
    end
    
    // ---------------------------
    // WRITE (SYNC)
    // ---------------------------
    
    logic [3:0] wstrb;

    always_comb begin
        case (funct3)
            3'b000: begin // SB
                case(mem_addr_o[1:0])
                    2'b00: wstrb = 4'b0001;
                    2'b01: wstrb = 4'b0010;
                    2'b10: wstrb = 4'b0100;
                    2'b11: wstrb = 4'b1000;
                endcase
            end

            3'b001: begin // SH
                case(mem_addr_o[1])
                    1'b0: wstrb = 4'b0011;
                    1'b1: wstrb = 4'b1100;
                endcase
            end

            3'b010: wstrb = 4'b1111;  // SW
            default: wstrb = 4'b0000;
        endcase
    end
    
    assign mem_wstrb_o = wstrb;

    //Write Back (Stage 4) - MEM->WB pipeline registers
    pipe_reg WB_1(
        .clk(clk),
        .rst(rst),
        .data_in(pc_mem),
        .data_out(pc_wb)
    );
    pipe_reg WB_2(
        .clk(clk),
        .rst(rst),
        .data_in(mem_addr_o),
        .data_out(alu_wb)
    );
    
    pipe_reg WB_3(
        .clk(clk),
        .rst(rst),
        .data_in(load_result),
        .data_out(dmem_wb)
    );

    pipe_reg WB_4(
        .clk(clk),
        .rst(rst),
        .data_in(inst_mem),
        .data_out(inst_wb)
    );
    
    pipe_reg #(.WIDTH(1)) WB_5(   
        .clk(clk),                
        .rst(rst),                
        .data_in(MemRW_mem),      
        .data_out(MemRW_wb)       
    );                                                  
                                  
    pipe_reg #(.WIDTH(2)) WB_6(   
        .clk(clk),                
        .rst(rst),                
        .data_in(WBSel_mem),      
        .data_out(WBSel_wb)       
    );                             
    
    pipe_reg #(.WIDTH(1)) WB_7(   
        .clk(clk),                
        .rst(rst),                
        .data_in(RegWEn_mem),      
        .data_out(RegWEn_wb)       
    );
    
    pipe_reg WB_8(
        .clk(clk),
        .rst(rst),
        .data_in(data1_mem),
        .data_out(data1_wb)
    );
    
    pipe_reg WB_9(
        .clk(clk),
        .rst(rst),
        .data_in(data2_mem),
        .data_out(data2_wb)
    );
    
    pipe_reg WB_10(
        .clk(clk),
        .rst(rst),
        .data_in(mem_dat_o),
        .data_out(mem_dat_wb)
    );
    
    // WB mux: select writeback data (WBSel_wb is pipelined)
    always_comb begin
        case(WBSel_wb)
            2'd0: mux2_out = dmem_wb;
            2'd1: mux2_out = alu_wb;
            2'd2: mux2_out = pc_wb + 4;
            default: mux2_out = 32'd0;
        endcase
    end
    
    assign rsW = inst_wb[11:7];
    assign pc_in = pc_sel_mem ? mem_addr_o : pc_adder;
    
    //Adding tracer support
    wire [31:0] rvfi_insn = inst_wb;
    wire [4:0]  rvfi_rs1_addr = inst_wb[19:15];
    wire [4:0]  rvfi_rs2_addr = inst_wb[24:20];
    wire [31:0] rvfi_rs1_rdata = data1_wb;
    wire [31:0] rvfi_rs2_rdata = data2_wb;
    wire [4:0]  rvfi_rd_addr = rsW;
    wire [31:0] rvfi_rd_wdata = mux2_out;
    wire [31:0] rvfi_pc_rdata = pc_wb;
    wire [31:0] rvfi_pc_wdata = pc_in;
    wire [31:0] rvfi_mem_addr = alu_wb;
    wire [31:0] rvfi_mem_wdata = mem_dat_wb;
    wire [31:0] rvfi_mem_rdata = dmem_wb;
    reg         rvfi_valid = 1'b0;
    wire [6:0]  opcode = inst_wb[6:0];
    
always_comb begin
    if(opcode == 7'b0110011 || opcode == 7'b0010011 || 
       opcode == 7'b0000011 || opcode == 7'b1100111 || 
       opcode == 7'b0100011 || opcode == 7'b1100011 ||
       opcode == 7'b0110111 || opcode == 7'b0010111 || 
       opcode == 7'b1101111)
       rvfi_valid = 1'b1;
    else
       rvfi_valid = 1'b0;
       //rvfi_valid = ~illegal_inst_o;
end

`ifdef tracer 
    tracer tracer_inst (
        .clk_i           (clk),
        .rst_ni          (rst),
        .hart_id_i       (32'd1),
        .rvfi_insn_t     (rvfi_insn),
        .rvfi_rs1_addr_t (rvfi_rs1_addr),
        .rvfi_rs2_addr_t (rvfi_rs2_addr),
        .rvfi_rs3_addr_t (5'd0),
        .rvfi_rs3_rdata_t(32'd0),
        .rvfi_mem_rmask  (),
        .rvfi_mem_wmask  (),
        .rvfi_rs1_rdata_t(rvfi_rs1_rdata),
        .rvfi_rs2_rdata_t(rvfi_rs2_rdata),
        .rvfi_rd_addr_t  (rvfi_rd_addr),
        .rvfi_rd_wdata_t (rvfi_rd_wdata),
        .rvfi_pc_rdata_t (rvfi_pc_rdata),
        .rvfi_pc_wdata_t (rvfi_pc_wdata),
        .rvfi_mem_addr   (rvfi_mem_addr),
        .rvfi_mem_wdata  (rvfi_mem_wdata),
        .rvfi_mem_rdata  (rvfi_mem_rdata),
        .rvfi_valid      (1'b1)
     );
    `endif
    
endmodule
