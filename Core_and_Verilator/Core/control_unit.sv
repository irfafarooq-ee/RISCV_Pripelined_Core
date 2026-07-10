module control_unit(
    input  [31:0]     instruction,    // Instruction from instruction memory
    output reg [2:0]  inst_type,      // Instruction Type (R, I, 
    output reg        BrUn,
    output reg        JSel,
    output reg        BSel,
    output reg [3:0]  ALUSel,
    output reg        MemRW,
    output reg        RegWEn,
    output reg [1:0]  WBSel,  
    output reg        illegal_inst
);
    
    wire [6:0] opcode = instruction[6:0];
    wire [2:0] funct3 = instruction[14:12];
    wire [6:0] funct7 = instruction[31:25];

always_comb begin       
       case(opcode)
            7'b0110011: begin // R-Type
                RegWEn    = 1'd1;
                JSel      = 1'd0;
                BSel      = 1'd0;
                WBSel     = 2'd1;
                BrUn      = 1'd0;
                MemRW     = 1'd0;
                inst_type = 3'd5; 
                illegal_inst = 1'b0;
                
                case(funct3)
                    3'd0: begin 
                        if(funct7 == 7'b0)              // add
                            ALUSel = 4'd0;
                            
                        else if (funct7 == 7'b0100000)  // sub
                            ALUSel = 4'd7;            
                    end
                    
                    3'd1: ALUSel = 4'd8;               // sll
                    3'd2: ALUSel = 4'd10;              // slt
                    3'd3: ALUSel = 4'd9;               // sltu
                    3'd4: ALUSel = 4'd4;               // xor
                        
                    3'd5: begin 
                        if(funct7 == 7'b0000000)        // srl
                            ALUSel = 4'd5;
                                                    
                        else if (funct7 == 7'b0100000)  // sra
                            ALUSel = 4'd6;            
                        end
 
                    3'd6: ALUSel = 4'd3;               // xor
                    3'd7: ALUSel = 4'd2;               // and
                     
                endcase
            end
            
            7'b0010011: begin // I-Type with immediate
                RegWEn    = 1'd1;
                JSel      = 1'd0;
                BSel      = 1'd1;
                WBSel     = 2'd1;
                inst_type = 3'd0;
                MemRW     = 1'd0;
                BrUn      = 1'd0;
                illegal_inst = 1'b0;

                case(funct3)
                    3'd0: ALUSel = 4'd0;              // addi
                    3'd1: ALUSel = 4'd8;              // slli
                    3'd2: ALUSel = 4'd10;             // slti
                    3'd3: ALUSel = 4'd9;              // sltiu
                    3'd4: ALUSel = 4'd4;              // xori
                        
                    3'd5: begin
                        if(funct7 == 7'b0000000)       // srli
                            ALUSel = 4'd5;
                            
                        else if (funct7 == 7'b0100000) //srai
                            ALUSel = 4'd6;
                    end 

                    3'd6: ALUSel = 4'd3;              // ori
                    3'd7: ALUSel = 4'd2;              // andi
                        
                endcase
            end
            
            7'b0000011: begin // I-Type for Loads
                // lb, lh, lw, lbu, lhu
                RegWEn    = 1'd1;
                JSel      = 1'd0;
                BSel      = 1'd1;
                WBSel     = 2'd0;
                MemRW     = 1'd0;
                ALUSel    = 4'd0;
                inst_type = 3'd0;
                BrUn      = 1'd0;
                illegal_inst = 1'b0;
            
            end
            
            7'b1100111: begin // I-Type Jump (jalr)
                RegWEn    = 1'd1;
                JSel      = 1'd1;
                BSel      = 1'd1;
                WBSel     = 2'd2;
                ALUSel    = 4'd0;
                inst_type = 3'd0;
                MemRW     = 1'd0;
                BrUn      = 1'd0;
                illegal_inst = 1'b0;

            end
            
            7'b0100011: begin // S-Type
                // sb, sh, sw
                RegWEn    = 1'd0;
                JSel      = 1'd0;
                BSel      = 1'd1;
                ALUSel    = 4'd0;
                inst_type = 3'd1;
                WBSel     = 2'd1;
                MemRW     = 1'd1;
                BrUn      = 1'd0;
                illegal_inst = 1'b0;

            end
            
            7'b1100011: begin // B-Type
                RegWEn    = 1'd0;
                JSel      = 1'd1;
                BSel      = 1'd1;
                ALUSel    = 4'd0;
                inst_type = 3'd3;
                WBSel     = 2'd1;
                MemRW     = 1'd0;
                illegal_inst = 1'b0;

                case(funct3)
                    3'd0, 3'd1, 3'd4, 3'd5: // beq, bne, blt, bge
                        BrUn = 1'd0;
                        
                    3'd6, 3'd7: // bltu, // bgeu
                        BrUn = 1'd1;
                    
                endcase
                    
            end
            
            7'b0110111: begin // U-Type (lui)
                RegWEn    = 1'd1;
                JSel      = 1'd0;
                BSel      = 1'd1;
                ALUSel    = 4'd1;
                inst_type = 3'd4;
                WBSel     = 2'd1;
                MemRW     = 1'd0;
                illegal_inst = 1'b0;

            end
            
            7'b0010111: begin // U-Type (auipc)
                RegWEn    = 1'd1;
                JSel      = 1'd1;
                BSel      = 1'd1;
                ALUSel    = 4'd0;
                inst_type = 3'd4;
                WBSel     = 2'd1;
                MemRW     = 1'd0;
                illegal_inst = 1'b0;

            end
            
            7'b1101111: begin // J-Type (jal)
                RegWEn    = 1'd1;
                JSel      = 1'd1;
                BSel      = 1'd1;
                ALUSel    = 4'd0;
                inst_type = 3'd2;
                WBSel     = 2'd2;
                MemRW     = 1'd0;
                illegal_inst = 1'b0;

            end
            
            7'b1110011: begin
                illegal_inst = 1'b1;
            end
        
    default: begin
        inst_type    = 3'd0;
        BrUn         = 1'b0;
        JSel         = 1'b0;
        BSel         = 1'b0;
        ALUSel       = 4'd0;
        MemRW        = 1'b0;
        RegWEn       = 1'b0;
        WBSel        = 2'd1;
        illegal_inst = 1'b0;
        end
    endcase
end
endmodule
