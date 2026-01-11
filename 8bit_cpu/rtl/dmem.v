`timescale 1ns/1ps

module dmem(
        input       clk,
        input       we,
        input [3:0] addr,
        input [3:0] wdata,
        output [3:0] rdata
    );

    reg [3:0] mem [0:15];

    assign rdata = mem[addr];

    always @(posedge clk) begin
        if (we)
            mem[addr] <= wdata;
        end
endmodule
