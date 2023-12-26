#include "common_module.h"
#include "stdio.h"

// 2 bits Multiplexor
int multiplexer_2b(int input1, int input2, int select) {
  int nselect = not_gate(select);
  int a_and_nselect = and_gate(nselect, input1);
  int b_and_select = and_gate(select, input2);
  int output = or_gate(a_and_nselect, b_and_select); // (S'·A + S·B)
}

// 2 bits multiplexor only with nand gates
int multiplexer_2b_nand(int input1, int input2, int select) {
  int not_select = nand_gate(select, select);
  int a_and_nselect = nand_gate(not_select, input1);
  int b_and_select = nand_gate(select, input2);
  int output = nand_gate(a_and_nselect, b_and_select); // (S'·A + S·B)
  return output;
}

