#ifndef COMMON_MODULE_H
#define COMMON_MODULE_H

// Declarations for logic gates
int and_gate(int input1, int input2);
int nand_gate(int input1, int input2);
int or_gate(int input1, int input2);
int nor_gate(int input1, int input2);
int xor_gate(int input1, int input2);

// Declaration of basic components
int multiplexer_2b(int input1, int input2, int select);

// Exceptions and Error functions
bool valid_binary_input(int input1, int input2);








#endif // COMMON_MODULE_H