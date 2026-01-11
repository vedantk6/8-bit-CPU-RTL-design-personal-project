ISA and design rule:

- Data width = 4 bits

- Registers = 8 registers (R0 - R7), 4 bits each

- Instruction memory = 16 words

- Data memory = 16 words

- Instruction encoding = [7:4] = opcode (3 bits)

opcodes:

0000: {carry, y} = a + b; // Addition
0001: {carry, y} = a - b; // Subtraction
0010: y = a & b;          // Bitwise AND
0011: y = a | b;          // Bitwise OR
0100: y = a ^ b;          // Bitwise XOR
0101: y = ~(a | b);       // Bitwise NOR
0110: y = (a > b) ? 8'b00000001 : 8'b00000000; // Greater-than compare 
0111: y = (a == b) ? 8'b00000001 : 8'b00000000; // Equality compare 
1000: y = a << 1;         // Shift left by 1
1001: y = a >> 1;         // Shift right by 1