//The header guard ensures that the contents of the header 
//file are processed only if the corresponding identifier 
//(COMMON_MODULE_H in this case) is not already defined. 
//If it is defined, the content within the #ifndef block is skipped.

#ifndef COMMON_MODULE_H
#define COMMON_MODULE_H


// Declaration of basic components
int multiplexer_2b(int input1, int input2, int select);
int multiplexer_2b_nand(int input1, int input2, int select);



#endif // COMMON_MODULE_H