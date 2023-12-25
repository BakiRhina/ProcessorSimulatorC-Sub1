#include "common_module.h"

int AND(int input1, int input2) {
  return input1 && input2;
}

int NAND(int input1, int input2) {
  return !(input1 && input2);
}

int OR(int input1, int input2) {
  return input1 || input2;
}

int NOR(int input1, int input2) {
  return !(input1 || input2);
}

int XOR(int input1, int input2) {
  return !(input1 ^ input2);
}

