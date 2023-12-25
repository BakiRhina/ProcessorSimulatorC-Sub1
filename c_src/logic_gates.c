#include "common_module.h"
#include "stdbool.h"
#include "stdio.h"

// If the compiler doesn't support stdbool.h header
#define True
#define False 


int and_gate(int input1, int input2) {
  if (valid_binary_input(input1, input2)) {
    return input1 & input2;
  } else {
    printf("Not a binary number");
    return -1;
  }
}

int nand_gate(int input1, int input2) {
  if (valid_binary_input(input1, input1)) {
    return !(input1 & input2);
  } else {
    printf("Not a binary number");
    return -1;
  }
}

int or_gate(int input1, int input2) {
  if (valid_binary_input(input1, input2)) {
    return input1 | input2;
  } else {
    printf("Not a binary number");
    return -1;
  }
}

int nor_gate(int input1, int input2) {
  if (valid_binary_input(input1, input2)) {
    return !(input1 | input2);
  } else {
    printf("Not a binary number");
    return -1;
  }
}

int xor_gate(int input1, int input2) {
  if (valid_binary_input(input1, input2)) {
    return input1 ^ input2;
  } else {
    printf("Not a binary number");
    return -1;
  }
  
}

bool valid_binary_input(int input1, int input2) {
  return (input1 == 0 || input1 == 1 || input2 == 0 || input2 == 1);
}

