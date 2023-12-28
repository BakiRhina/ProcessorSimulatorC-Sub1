#include "common_module.h"
#include "c_module1.h"
#include "stdio.h"


//SECTION - MULTIPLEXORS

// 2 bits Multiplexor
int multiplexer_2b(int input1, int input2, int select) {
  int nselect = not_gate(select);
  int a_and_nselect = and_gate(nselect, input1);
  int b_and_select = and_gate(select, input2);
  int output = or_gate(a_and_nselect, b_and_select); // (S'·A + S·B)
  return output;
}

// 2 bits Multiplexor only with nand gates
int multiplexer_2b_nand(int input1, int input2, int select) {
  int not_select = nand_gate(select, select);
  int a_and_nselect = nand_gate(not_select, input1);
  int b_and_select = nand_gate(select, input2);
  int output = nand_gate(a_and_nselect, b_and_select); // (S'·A + S·B)
  return output;
}

// 4 bits Multiplexor
int multiplexer_4b(int input1, int input2, int input3, int input4, int s0, int s1) {
  int ns0 = not_gate(s0);
  int ns1 = not_gate(s1);
  int ns0_and_ns1_and_input1 = and_gate_var(3, (int[3]){ns0, ns1, input1});
  int ns0_and_s1_and_input2 = and_gate_var(3, (int[3]){ns0, s1, input2});
  int s0_and_ns1_and_input3 = and_gate_var(3, (int[3]){s0, ns1, input3});
  int s0_and_s1_and_input4 = and_gate_var(3, (int[3]){s0, s1, input4});
  int output = or_gate_var(4, (int[4]){ns0_and_ns1_and_input1, ns0_and_s1_and_input2, s0_and_ns1_and_input3, s0_and_s1_and_input4});

  return output;
}

//!SECTION

//SECTION - ADDERS

int full_adder(int input1, int input2, int carry_in) {
  int a_xor_b = xor_gate(input1, input2);
  int a_and_b = and_gate_2bit(input1, input2);
  int a_xor_b_and_cin = and_gate_2bit(a_xor_b, carry_in);
  int sum = xor_gate(a_xor_b, carry_in);
  int carry_out = xor_gate(a_xor_b_and_cin, a_and_b);
  return sum, carry_out;
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