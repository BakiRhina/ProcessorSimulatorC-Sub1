#include "common_module.h"
#include "c_module1.h"
#include "stdio.h"


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
int and_gate_3bit(int input1, int input2, int input3) {
  return input1 & input2 & input3;
}

// 4 bits AND gate
int and_gate_4bit(int input1, int input2, int input3, int input4) {
  return input1 & input2 & input3 & input4;
}

// Variable input number AND gate TWO ARGUMENTS
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

// Variable input number AND gate ONE ARGUMENT
int and_gate_var_1arg(int inputs[]) {
  /* This method takes only an integer list as an argument. The data
  needs to have a sentiel value when the array of bits is over. [1,1,0,1,-1]
  
  We could implement a similar functionality by sending the number of bits contained
  in the array with an integer at the 1rst position of the array.
  
  */
  int result = inputs[0]; // initialize result with first value of the input 0 or 1.
  int i = 1;
  while (inputs[i] != -1) {
    if (!valid_binary_input(inputs[i])) {
      printf("Input at index %d is not a binary\n", i);
      return -1;
    } else {
      result &= inputs[i]; // If result is not initialized (empty) the operator & will lead to errors.
    }
    i++;
  }
  return result;
}

//!SECTION

//SECTION - NAND gates


// 2 bit NAND gate
int nand_gate(int input1, int input2) {
  if (valid_binary_input(input1, input2)) {
    return !(input1 & input2);
  } else {
    printf("Not a binary number");
    return -1;
  }
}

// Variable input number NAND gate
int nand_gate_var(int num_inputs, int inputs[]) {
  int result = inputs[0];
  
  for (int i = 1; i < num_inputs; ++i) {
    if (!valid_binary_input(inputs[i])) {
      printf("Input at index %d is not a binary\n", i);
      return -1;
    } else {
      result &= inputs[i];
    }
  }
  return !result;
}

//!SECTION

//SECTION - OR gates

// 2 bits OR gate
int or_gate_2b(int input1, int input2) {
  if (valid_binary_input(input1, input2)) {
    return input1 | input2;
  } else {
    printf("Not a binary number");
    return -1;
  }
}

// Variable OR gate
int or_gate_var(int num_inputs, int inputs[]) {
  int result = inputs[0];
  
  for (int i = 1; i < num_inputs; ++i) {
    if (!valid_binary_input(inputs[i])) {
      printf("Input at index %d is not a binary\n", i);
      return -1;
    } else {
      result |= inputs[i];
    }
  }
  return result;
}

//!SECTION


//SECTION - NOR gates

// 2 bits NOR gate
int nor_gate(int input1, int input2) {
  if (valid_binary_input(input1, input2)) {
    return !(input1 | input2);
  } else {
    printf("Not a binary number");
    return -1;
  }
}

//!SECTION


//SECTION - XOR gate

int xor_gate(int input1, int input2) {
  if (valid_binary_input(input1, input2)) {
    return input1 ^ input2;
  } else {
    printf("Not a binary number");
    return -1;
  }
}


// NOT gate
int not_gate(int input) {
  if (input == 1 || input == 0) {
    return !(input);
  } else {
    printf("Not a binary number");
    return -1;
  }
}

