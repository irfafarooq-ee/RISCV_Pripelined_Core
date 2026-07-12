module fpga_top (
    input  logic clk_i,      // board oscillator pin
    input  logic resetn_i,   // board reset button/pin
    output logic illegal_inst_o  // or whatever you want visible off-chip (LED etc.)
);

    logic [31:0] imem_addr, imem_inst;
    logic [31:0] mem_addr, mem_wdata, mem_rdata;
    logic        mem_write, mem_read, mem_ack;
    logic [3:0]  mem_wstrb;

    rv32i_top DUT (
        .clk_i(clk_i), .resetn_i(resetn_i),
        .illegal_inst_o(illegal_inst_o),
        .imem_addr_o(imem_addr), .imem_inst_i(imem_inst),
        .mem_addr_o(mem_addr), .mem_dat_o(mem_wdata), .mem_dat_i(mem_rdata),
        .mem_write_o(mem_write), .mem_wstrb_o(mem_wstrb),
        .mem_read_o(mem_read), .mem_ack_i(mem_ack)
    );

    imem imem_instance ( .clk(clk_i),    
                         .addr(imem_addr), 
                         .inst(imem_inst) 
                        );

    dmem dmem_inst     ( .clk(clk_i),       .reset_n(resetn_i),   .addr(mem_addr),
                         .wstrb(mem_wstrb), .write_en(mem_write), .read_en(mem_read),
                         .rdata(mem_rdata), .wdata(mem_wdata),    .ack(mem_ack) 
                        );

endmodule