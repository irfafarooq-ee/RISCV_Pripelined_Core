module branch_comp (
    input  [6:0] opcode,
    input  [31:0] op1, op2,
    input         BrUn,
    output reg    Eq, Lt
);

always_comb begin
    Eq = 0;
    Lt = 0;
    
    if(opcode == 7'b1100011) begin
        Eq = ($signed(op1) == $signed(op2));

        Lt = (BrUn == 1'b0) ? 
             ($signed(op1) < $signed(op2)) :  // Signed comparison
             (op1 < op2);                     // Unsigned comparison
    end
end
endmodule