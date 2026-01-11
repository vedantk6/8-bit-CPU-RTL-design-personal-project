`timescale 1ns/1ps

module cpu_top(

    input clk,
    input rst

);
    reg[7:0] pc;        // program counter

    //wires
    wire [11:0] instr;
    wire [3:0] opcode;
    wire [2:0] dest, src;
    wire [7:0] rdata, sdata;
    wire [7:0] alu_result;
    wire wen;
    wire carry;

    //instruction memory
    imem mem (
        .addr(pc),
        .instr(instr)
    );

    //decode instruction field
    assign opcode = instr[11:8];
    assign dest = instr[7:5];
    assign src = instr[4:2];
    assign wen = 1'b1;

    // register file

    register rf(
        .clk(clk),
        .wen(wen),
        .waddr(dest),
        .saddr(src),
        .wdata(alu_result),
        .rdata(rdata),
        .sdata(sdata)
    );

    //alu file

    alu myalu(
        .a(rdata),
        .b(sdata),
        .op(opcode),
        .y(alu_result),
        .carry(carry)
      
    );

    //program counter update
    always @(posedge clk  or posedge rst) begin
        if (rst)
            pc <= 8'd0;
        else
            pc <= pc + 1;
    end

endmodule
