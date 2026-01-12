# 8-bit-CPU-RTL-Design

## Project Summary
This project implements an 8-bit CPU RTL Design and aims to meet implement predetermined design rules. It showcases what an 8-bit CPU looks like at the RTL design level, how it is testbenched, and the importance of waveform analysis in verifying the functionality of the design. The code consists of RTL files of all the components (registers, memory, decoder, ALU, etc.) and is fully executable in linux (requires Verilator and GTKWave to be installed).

## Tools Used
- Ubuntu
- Verilog
- GTKWave
- Verilator

## Design Rules Implemented:

Data width = 8 bits

Registers = 8 registers (R0 - R7), 8 bits each

Instruction memory = 255 words

Data memory = 16 words

Instruction encoding:
- [11:8] = opcode (4 bits)
- [7:5] = rd = write address (3 bits)
- [4:2] = rs = source address (3 bits)

opcodes:
- 0000: {carry, y} = a + b (Addition)
- 0001: {carry, y} = a - b; (Subtraction)
- 0010: y = a & b; (Bitwise AND) 
- 0011: y = a | b; (Bitwise OR)
- 0100: y = a ^ b; (Bitwise XOR)
- 0101: y = ~(a | b); (Bitwise NOR)
- 0110: y = (a > b) ? 8'b00000001 : 8'b00000000; (Greater-than compare)
- 0111: y = (a == b) ? 8'b00000001 : 8'b00000000; (Equality compare)
- 1000: y = a << 1; (Shift left by 1)
- 01001: y = a >> 1; (Shift right by 1)
