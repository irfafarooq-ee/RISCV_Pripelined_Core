module hazard_detection(
    input [4:0] rs1, rs2, rd,
    input [6:0] opcode,
    input       RegWEn,
    output reg  mux_en, IFWrite, PCWrite);

    always_comb begin
        // default assignments
        PCWrite = 1;
        IFWrite = 1;
        mux_en  = 0;
        
       if(opcode == 7'b0000011) begin
        if (RegWEn && (rd != 0)) begin
            if ((rd == rs1 || rd == rs2)) begin
                PCWrite = 0;
                IFWrite = 0;
                mux_en  = 1;
            end
        end
       end
    end

endmodule