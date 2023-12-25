#include "common_module.h"
#include "stdbool.h"

// If the compiler doesn't support stdbool.h header
#define True
#define False 

int and_gate(int input1, int input2) {
  return input1 & input2;
}

int nand_gate(int input1, int input2) {
  return !(input1 & input2);
}

int or_gate(int input1, int input2) {
  return input1 | input2;
}

int nor_gate(int input1, int input2) {
  return !(input1 | input2);
}

int xor_gate(int input1, int input2) {
  return input1 ^ input2;
}

bool valid_binary_input(int input1, int input2) {
  return (input1 != 0 && input1 != 1 && input2 != 0 && input2 != 1);
}

