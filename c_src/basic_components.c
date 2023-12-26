#include "common_module.h"
#include "c_module1.h"
#include "stdio.h"

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