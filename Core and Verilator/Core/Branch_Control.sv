module Branch_Control (
    input  logic [31:0] instruction,
    input  logic        Eq, Lt,
    output logic        pc_sel
);
    wire [6:0] opcode = instruction[6:0];
    wire [2:0] funct3 = instruction[14:12];

    always_comb begin
        pc_sel = 1'b0; // Default: do not branch
        
        if (opcode == 7'b0110111)
            pc_sel = 1'b0;
        else if(opcode == 7'b1100111) // J-Type instruction
                pc_sel = 1'b1;
        else if (opcode == 7'b1101111)
                pc_sel = 1'b1;
        else if (opcode == 7'b1100011) begin // Branch-type instruction
                case (funct3)
                    3'b000: pc_sel =  Eq;                  // BEQ
                    3'b001: pc_sel = ~Eq;                  // BNE
                    3'b100: pc_sel = Lt;   // BLT (signed)
                    3'b101: pc_sel = ~Lt;   // BGE (signed)
                    3'b110: pc_sel =  Lt;   // BLTU (unsigned)
                    3'b111: pc_sel =  ~Lt;   // BGEU (unsigned)
                default: pc_sel = 1'b0;
                endcase
        end        
    end
endmodule
