module dmem #(
    parameter DMEM_DEPTH = 32*1024
)(
    input logic clk,
    input logic reset_n,
    input logic [31:0] addr,
    input logic [31:0] wdata,
    input logic [3:0] wstrb,
    input logic write_en,
    input logic read_en,
    output logic [31:0] rdata,
    output logic ack
);

logic [31:0] dmem [0:DMEM_DEPTH-1];
logic [31:0] local_addr;  // address mapped to memory array
logic [31:0] word_index;

// compute the local index in memory
always_comb begin
    if (addr >= 32'h9000_0000)
        local_addr = addr - 32'h9000_0000;
    else
        local_addr = 32'd0; // optional: default/fault for out-of-range access
    word_index = local_addr[31:2];  // divide by 4 for word indexing
end

// write operation
always_ff @(posedge clk) begin
    if (write_en) begin
        if (wstrb[0]) dmem[word_index][7:0]   <= wdata[7:0];
        if (wstrb[1]) dmem[word_index][15:8]  <= wdata[15:8];
        if (wstrb[2]) dmem[word_index][23:16] <= wdata[23:16];
        if (wstrb[3]) dmem[word_index][31:24] <= wdata[31:24];
    end
end

// read operation
always_ff @(posedge clk) begin
    if (read_en)
        rdata <= dmem[word_index];
    else
        rdata <= 32'b0;
end

// acknowledge the transaction
    always_ff @(posedge clk, negedge reset_n) begin
    if(~reset_n) begin
        ack <= 1'b0;
    end else begin
        ack <= (write_en | read_en);
    end
end

// initialize the memory using dmem.mem
initial begin
    `ifdef verilator
        $readmemh("/mnt/c/Computer_Architecture/RISCV_Pripelined_Core/Core_and_Verilator/tests/dmem_0.mem", dmem);
    `else 
        $readmemh("/mnt/c/Computer_Architecture/RISCV_Pripelined_Core/Core_and_Verilator/tests/dmem.mem", dmem);
    `endif
end

endmodule
