module Flush_regs (
    input  logic pc_sel, clk, rst,
    output logic flush
);

    always_ff @(posedge clk or negedge rst) begin
        if (!rst)
            flush <= 1'b1;     // Normal operation (no flush) after reset
        else if (pc_sel)
            flush <= 1'b0;     // Trigger flush (active-low)
        else
            flush <= 1'b1;     // No flush
    end
endmodule