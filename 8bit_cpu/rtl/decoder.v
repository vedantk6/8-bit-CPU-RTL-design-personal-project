`timescale 1ns/1ps

module decoder (
    input  [11:0] instr,
    output [3:0] opcode,
    output [2:0] rd,
    output [2:0] rs,
    output wen
);
    assign opcode = instr[11:8];
    assign rd     = instr[7:5];
    assign rs     = instr[4:2];
    assign wen = 1'b1;
endmodule
