#ifndef C_MODULE1_H
#define C_MODULE1_H



// Declarations for logic gates
int and_gate(int input1, int input2);
int nand_gate(int input1, int input2);
int or_gate(int input1, int input2);
int nor_gate(int input1, int input2);
int xor_gate(int input1, int input2);
int not_gate(int input);

// Error handling and validations
bool valid_binary_input(int input);
bool valid_binary_2bits(int input1, int input2);




#endif