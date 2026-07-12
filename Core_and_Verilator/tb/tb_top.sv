`timescale 1ns/1ps
module my_tb_top;

    // ------------------------------------
    // Testbench Signals
    // ------------------------------------
    logic        clk = 0; 
    logic        reset_n; 
    logic [31:0] imem_addr;
    logic [31:0] imem_inst;
    logic [31:0] mem_addr;
    logic [31:0] mem_wdata;
    logic [31:0] mem_rdata;
    logic        mem_write;
    logic [3:0]  mem_wstrb;
    logic        mem_read;
    logic        mem_ack;
    logic        illegal_inst;

    // ------------------------------------
    // DUT
    // ------------------------------------
    rv32i_top dut (
      .clk_i(clk),
      .resetn_i(reset_n),
      .illegal_inst_o(illegal_inst),
      .imem_addr_o(imem_addr),
      .imem_inst_i(imem_inst),
      .mem_addr_o(mem_addr),
      .mem_dat_o(mem_wdata),
      .mem_dat_i(mem_rdata),
      .mem_write_o(mem_write),
      .mem_wstrb_o(mem_wstrb),
      .mem_read_o(mem_read),
      .mem_ack_i(mem_ack)
    );

    // ------------------------------------
    // Instruction & Data Memory
    // ------------------------------------
    imem imem_instance (
        .clk(clk),
        .addr(imem_addr),
        .inst(imem_inst)
    );

    dmem dmem_instance (
        .clk(clk),
        .reset_n(reset_n),
        .addr(mem_addr),
        .wstrb(mem_wstrb),
        .write_en(mem_write),
        .read_en(mem_read),
        .rdata(mem_rdata),
        .wdata(mem_wdata),
        .ack(mem_ack)
    );
 
    // Clock generation
    always #5 clk = ~clk;  // 10ns clock period
     
    // Dump pipeline registers for observation
    task print_pipeline;
        begin
            $display("----------------------------------------------------------------------------------");
            $display("Time = %0t ns", $time);
            $display("  IF  => PC: %h, Inst: %h", dut.addr_if, dut.dataR_if);
            $display("  ID  => PC ID: %h, Inst: %h, rs1=%0d, rs2=%0d, brUn=%h",
                        dut.pc_id, dut.inst_id, dut.rs1, dut.rs2, dut.BrUn);
            $display("  EX  => PC EX: %h, Inst: %h, data1: %h, data2: %h, imm: %h, alu1: %h, alu2: %h",
                        dut.pc_ex, dut.inst_ex, dut.data1_ex, dut.data2_ex, dut.immediate_ex, dut.alu_in1, dut.alu_in2);
            $display("          ALUSel=%b, BSel=%b, JSel=%b, WBSel=%b, RegWEn=%b, pc_sel=%h, flush=%h, Eq=%h, Lt=%h",
                        dut.ALUSel_ex, dut.BSel_ex, dut.JSel_ex, dut.WBSel_ex, dut.RegWEn_ex, dut.pc_sel, dut.flush, dut.Eq, dut.Lt);
            $display("  MEM => PC MEM: %h, Inst: %h, ALU: %h, data2: %h, load result: %h",
                        dut.pc_mem, dut.inst_mem, dut.mem_addr_o, dut.data2_mem, dut.load_result);
            $display("          MemRW=%b, fwd_a=%b, fwd_b=%b", dut.MemRW_mem, dut.fwd_a, dut.fwd_b);
            $display("  WB  => PC WB: %h, Inst: %h, mux2_out: %h, WBSel: %b, RegWEn: %b, rsW=%0d",
                        dut.pc_wb, dut.inst_wb, dut.mux2_out, dut.WBSel_wb, dut.RegWEn_wb, dut.rsW);
            $display("----------------------------------------------------------------------------------\n");
        end
    endtask
 
    integer i;
 
    // Main simulation
    initial begin
        clk = 0;
        reset_n = 0;
                  
        $monitor("Time=%0t | PC_IF=%h | PC_ID=%h | PC_EX=%h | PC_MEM=%h | PC_WB=%h | ALU=%h | PC+4=%h | PC IN=%h",
                  $time, imem_addr, dut.pc_id, dut.pc_ex, dut.pc_mem, dut.pc_wb,
                  dut.mem_addr_o, dut.pc_adder, dut.pc_in);
     
        #10;
        reset_n = 1;
         
        repeat (2000) begin
            @(posedge clk);
            #1;
            print_pipeline();
        end
 
        $finish;
    end
 
    // -----------------------------
    // FINAL BLOCK FOR DUMPING DATA
    // -----------------------------
    final begin
        // --- Register Dump ---
        $display("\n------------------- REGISTER FILE DUMP -------------------");
        for (i = 0; i < 32; i = i + 1)
            $display("x%0d = %h", i, dut.rf.x[i]);

        // --- Memory Dump ---
        $display("\n------------------- MEMORY DUMP --------------------------");
        for (i = 0; i < 32; i = i + 1)
            $display("mem[%0d] = %h", i, dmem_instance.dmem[i]);

        $display("------------------------------------------------------------\n");
    end
 
endmodule