#include "common_module.h"
#include "stdbool.h"

#define True
#define False

int AND(int input1, int input2) {
  return input1 & input2;
}

int NAND(int input1, int input2) {
  return !(input1 & input2);
}

int OR(int input1, int input2) {
  return input1 | input2;
}

int NOR(int input1, int input2) {
  return !(input1 | input2);
}

int XOR(int input1, int input2) {
  return input1 ^ input2;
}

bool valid_binary_input(int input1, int input2) {
  return (input1 != 0 && input1 != 1 && input2 != 0 && input2 != 1);
}

