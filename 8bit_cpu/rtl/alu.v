`timescale 1ns/1ps


module alu(
    input [7:0] a,
    input [7:0] b,
    input [3:0] op,

    output reg [7:0] y,
    output reg carry
);

    always @(*) begin
        y = 8'b00000000;
        carry = 1'b0;
        case (op)
            4'b0000: {carry, y} = a + b; // Addition
            4'b0001: {carry, y} = a - b; // Subtraction
            4'b0010: y = a & b;          // Bitwise AND
            4'b0011: y = a | b;          // Bitwise OR
            4'b0100: y = a ^ b;          // Bitwise XOR
            4'b0101: y = ~(a | b);       // Bitwise NOR
            4'b0110: y = (a > b) ? 8'b00000001 : 8'b00000000; // Greater-than compare 
            4'b0111: y = (a == b) ? 8'b00000001 : 8'b00000000; // Equality compare 
            4'b1000: y = a << 1;         // Shift left by 1
            4'b1001: y = a >> 1;         // Shift right by 1
            default: y = 8'b00000000;
        endcase
    end
endmodule
