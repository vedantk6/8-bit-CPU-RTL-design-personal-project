`timescale 1ns/1ps

module imem(
        input [7:0] addr,
        output reg [11:0] instr
    );

        reg [11:0] memory [0:255];

        initial begin
            $readmemh("/root/4bit_cpu/program.mem", memory);
        end

        always @(*) begin
            instr = memory[addr];
        end
endmodule
