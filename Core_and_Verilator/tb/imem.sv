/*
imem imem_inst (
    .addr(imem_addr),
    .inst(imem_inst)
);
*/
module imem #(
    parameter IMEM_DEPTH = 32*1024
)(
    input logic clk, 
    input logic [31:0] addr,
    output logic [31:0] inst
);

logic [31:0] imem [0:IMEM_DEPTH-1];
logic [31:0] address;

always_ff @(posedge clk) begin
    address = addr - 32'h8000_0000;
    inst = imem[address >> 2];
end

// initialize the imem using imem.mem file
initial begin
    `ifdef verilator
        $readmemh("/mnt/c/Computer_Architecture/RISCV_Pripelined_Core/Core_and_Verilator/tests/imem_0.mem", imem);
    `else 
        $readmemh("/mnt/c/Computer_Architecture/RISCV_Pripelined_Core/Core_and_Verilator/tests/imem.mem", imem);
    `endif
end

endmodule