#include "common_module.h"
#include "stdbool.h"
#include "stdio.h"

// If the compiler doesn't support stdbool.h header
#define True
#define False 


//SECTION - AND gates

// 2 bits AND gate
int and_gate_2bit(int input1, int input2) {
  if (valid_binary_input(input1, input2)) {
    return input1 & input2;
  } else {
    printf("Not a binary number");
    return -1;
  }
}

// 3 bits AND gate
int and_gate_4bit(int input1, int input2, int input3) {
  if (valid_binary_input(input1, input2)) {
    return input1 & input2 & input3;
  } else {
    printf("Not a binary number");
    return -1;
  }
}

// 4 bits AND gate
int and_gate_4bit(int input1, int input2, int input3, int input4) {
  return input1 & input2 & input3 & input4;
}

// Variable input number AND gate

  int and_gate_var(int num_inputs, int inputs[]) {
    int result = inputs[0]; // initialize result with first value of the input 0 or 1.
    
    for (int i = 1; i < num_inputs; ++i) {
      if (!valid_binary_input(inputs[i])) {
        printf("Input at index %d is not a binary\n", i);
        return -1;
      } else {
        result &= inputs[i]; // If result is not initialized (empty) the operator & will lead to errors.
      }
    }
    return result;
  }

//!SECTION

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

int not_gate(int input) {
  if (input == 1 || input == 0) {
    return !(input);
  } else {
    printf("Not a binary number");
    return -1;
  }
}

