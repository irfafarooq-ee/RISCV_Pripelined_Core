module pc_pipe_reg #(parameter WIDTH = 32)(
    input             clk, rst,
    input      [WIDTH-1:0] data_in,
    output reg [WIDTH-1:0] data_out
    );
    
    always @(posedge clk or negedge rst) begin
        if(!rst)
            data_out <= 32'd80000000;
        else
            data_out <= data_in;
    end
endmodule