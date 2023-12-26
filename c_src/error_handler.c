#include "c_module1.h"
#include "stdbool.h"



bool valid_binary_2bits(int input1, int input2) {
  return (input1 == 0 || input1 == 1 || input2 == 0 || input2 == 1);
}

bool valid_binary_input(int input) {
  return (input == 0 || input == 1);
}