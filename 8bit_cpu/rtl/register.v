`timescale 1ns/1ps

module register(
    input clk,              //clock
    input wen,              //enable
    input [2:0] waddr,      //write (destination) address
    input [2:0] saddr,      //source address
    input [7:0] wdata,      //write data
    output reg [7:0] rdata, //read data (from destination)
    output reg [7:0] sdata  //soure data (from source)
);

    reg [7:0] regs [0:7];   //8 registers (R0 to R7)

    integer i;
    initial begin                   //initalize all registers
        for (i=0; i<8; i=i+1) 
            regs[i] = 0;
    end

    always @(*) begin
        sdata = regs[saddr];
        rdata = regs[waddr];
    end

    always @(posedge clk) begin
        if (wen) 
            regs[waddr] <= wdata;
    end
endmodule

