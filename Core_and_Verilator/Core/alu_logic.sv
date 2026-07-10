module alu_logic #(parameter ALU_WIDTH = 32)(
    input [ALU_WIDTH-1:0] data1, data2, 
    input [3:0] ALUSel, 
    output reg [ALU_WIDTH-1:0] result 
); 
    wire [4:0] shift = data2[4:0];
    
    always_comb begin 
            case (ALUSel) 
                4'd0:  result <= data1 + data2;                                      // ADD (also used for LW/SW base + offset and auipc)
                4'd1:  result <= data2;                                              // LUI (Immediate value passed directly)
                4'd2:  result <= data1 & data2;                                      // AND
                4'd3:  result <= data1 | data2;                                      // OR
                4'd4:  result <= data1 ^ data2;                                      // XOR
                4'd5:  result <= data1 >> shift;                                     // SRL (logical right shift)
                4'd6:  result <= $signed(data1) >>> $signed(shift);                                    // SRA (arithmetic right shift)
                4'd7:  result <= data1 - data2;                                      // SUB
                4'd8:  result <= data1 << shift;                                     // SLL
                4'd9:  result <= (data1 < data2) ? 32'd1 : 32'd0;                    // SLT (unsigned)
                4'd10: result <= ($signed(data1) < $signed(data2)) ? 32'd1 : 32'd0;  // SLT (signed
                4'd11: result <= 0;
                4'd12: result <= 0;
                4'd13: result <= 0;
                4'd14: result <= 0;
                4'd15: result <= 0;
                default: result <= 0; 
            endcase 
        end 

endmodule
