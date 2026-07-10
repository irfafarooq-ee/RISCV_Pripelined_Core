module reg_file #(parameter REGF_WIDTH = 32)( 
    input clk, rst, RegWEn,
    input [4:0] rs1, rs2, rsW, 
    input [REGF_WIDTH-1:0] dataW, 
    output reg [REGF_WIDTH-1:0] data1, data2 
); 
    reg [REGF_WIDTH-1:0] x [0:31]; 
    integer i;
    
    // Initialize register file with known values (for simulation)
    initial begin
        for (i = 0; i < 32; i = i + 1)
            x[i] = 0;
    end

    // Synchronous write, but x0 stays 0
    always @(negedge clk) begin 
        if (RegWEn && rsW != 5'd0)
            x[rsW] <= dataW;
    end 

    // Combinational read
    // Combinational read with write-after-read bypassing
always @(*) begin
    // Read port 1
    if (rs1 == 5'd0)
        data1 = 32'd0;
    else if (rs1 == rsW && RegWEn && rsW != 5'd0)
        data1 = dataW;     // <-- bypass (forwarding)
    else
        data1 = x[rs1];

    // Read port 2
    if (rs2 == 5'd0)
        data2 = 32'd0;
    else if (rs2 == rsW && RegWEn && rsW != 5'd0)
        data2 = dataW;     // <-- bypass (forwarding)
    else
        data2 = x[rs2];
end

endmodule