module program_counter #(parameter PROG_VALUE = 32)(
    input clk, rst, PCWrite,
    input [PROG_VALUE-1:0] inc_value,
    output reg [PROG_VALUE-1:0] pc 
);
    reg write_en;
    
    always @(posedge clk or negedge rst) begin 
        if (!rst) begin
            pc <= 32'h8000_0000;
            write_en = 0;
            
        end else if(!write_en)
                    write_en <= 1;
               else begin
                    if (PCWrite) begin
                        if (pc < 32'hFFFFFFFC)
                            pc <= inc_value;
                        
                        else if (pc == 32'hFFFFFFFC)
                            pc <= 32'h80000000;
               end
        end
     end
endmodule