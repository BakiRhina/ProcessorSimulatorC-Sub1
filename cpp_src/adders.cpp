#include "common_module.h"
#include "stdio.h"

// RIPPLE CARRY ADDER --> INTRODUCES A DELAY BUT IT'S LESS COMPLEX

void four_bit_adder(int input1[4], int input2[4], *sum[], *carry_out) {
  int carry = 0;

  for (i = 0, i < 4, i++) {
    *sum[i] = (input1[i], input2[i])
  }
}



// LOOK AHEAD ADDER //TODO - INCOMPLETE!
int full_adder(int inputs_a[], int inputs_b[], int carry_in) {
  //check number of bits in bus A
  int nbits_a = inputs_a[0];
  // check number of bits in bus B
  int nbits_b = inputs_b[0];
  // instantiate the summatory list
  // if the number of bits is the same, they can be added
  if (nbits_a == nbits_b) {
    int i = 1;
    while (i < nbits_a) {
      if (!valid_binary_input(inputs_a[i]) | !valid_binary_input(inputs_b[i])) {
        printf("Input at index %d is not binary\n", i);
        return -1;
      } else {
        
      }
    }
  } 
}