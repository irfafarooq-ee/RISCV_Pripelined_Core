module imm_gen(
    input [31:0] instruction,
    input [2:0] inst_type,
    output reg [31:0] immediate
);

always_comb begin
    case(inst_type)
        3'd0: // I-Type
            immediate = {{20{instruction[31]}}, instruction[31:20]};

        3'd1: // S-Type
            immediate = {{20{instruction[31]}}, instruction[31:25], instruction[11:7]};

        3'd2: // J-Type
            immediate = {{11{instruction[31]}}, instruction[31], instruction[19:12],
                         instruction[20], instruction[30:21], 1'b0};

        3'd3: // B-Type
            immediate = {{19{instruction[31]}}, instruction[31], instruction[7], instruction[30:25], instruction[11:8], 1'b0};
            
        3'd4: // U-Type
            immediate = {instruction[31:12], 12'b0};
            
        // Placeholders for future expansion 
        3'd5: immediate = 32'd0;
        3'd6: immediate = 32'd0;
        3'd7: immediate = 32'd0;

        default: immediate = 32'd0;
    endcase
end

endmodule