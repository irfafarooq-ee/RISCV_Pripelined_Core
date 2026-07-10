module fwd_logic(
    input      [4:0] rs1_ex, rs2_ex,
    input      [4:0] rd_mem, rd_wb,
    input            RegWEn_mem, RegWEn_wb,
    output reg [1:0] fwd_a, fwd_b
);

    always_comb begin
        // Default values
        fwd_a = 2'b00;  // From register file
        fwd_b = 2'b00;

        // Forward for rs1
        if (RegWEn_mem && rd_mem != 0 && rd_mem == rs1_ex)
            fwd_a = 2'b01;  // from MEM
            
        else if (RegWEn_wb && rd_wb != 0 && rd_wb == rs1_ex)
            fwd_a = 2'b10;  // from WB

        // Forward for rs2
        if (RegWEn_mem && rd_mem != 0 && rd_mem == rs2_ex)
            fwd_b = 2'b01;  // from MEM
            
        else if (RegWEn_wb && rd_wb != 0 && rd_wb == rs2_ex)
            fwd_b = 2'b10;  // from WB
    end

endmodule