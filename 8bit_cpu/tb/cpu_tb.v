`timescale 1ns/1ps

module cpu_tb;

    reg clk;
    reg rst;



    //instantiate CPU:
    cpu_top uut(
        .clk(clk),
        .rst(rst)
    );

    //clock generation:
    initial begin
    clk = 0;
        forever begin       
            #5 clk = ~clk; //10ns period
        end
    end

    //reset pulse
    initial begin
        rst = 1;
        #10 rst = 0;          // first release
        #100;
        rst = 1;              // assert reset again
        #10;
        rst = 0;              // release again (restart program)
        #100;
        $finish;
    end
    //Simulation stop:
    initial begin 
        $dumpfile("cpu_tb.vcd");
        $dumpvars(0, cpu_tb);
        #200 $finish; //run 200ns
    end

    reg [7:0] pc_sample;
    always @(posedge clk) begin
        pc_sample <= uut.pc;  // sample synchronously
    end

    reg [2:0] dest_sample;
    reg [2:0] src_sample;
    always @(posedge clk) begin
        dest_sample <= uut.dest;
        src_sample  <= uut.src;
    end

    // monitor CPU signals:
    initial begin
        $display("Time|PC|Instr|Opcode|Dest|Src|Registers R0-R7");
        $monitor("%0t | %0d | %h | %b| %d | %d | %h %h %h %h %h %h %h %h", $time, pc_sample, uut.instr, uut.opcode, dest_sample, src_sample, uut.rf.regs[0], uut.rf.regs[1], uut.rf.regs[2], uut.rf.regs[3], uut.rf.regs[4], uut.rf.regs[5], uut.rf.regs[6], uut.rf.regs[7]);
    end
endmodule

