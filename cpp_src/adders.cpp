
// RIPPLE CARRY ADDER --> INTRODUCES A DELAY BUT IT'S LESS COMPLEX
typedef struct {
  int sum;
  int carry_out;
} FullAdderResult;

FullAdderResult full_adder(int input1, int input2, int carry_in) {
  FullAdderResult result;
  int a_xor_b = input1 ^ input2;
  int a_and_b = input1 & input2;
  int a_xor_b_and_cin = a_xor_b & carry_in;
  result.sum = a_xor_b ^ carry_in;
  result.carry_out = (a_xor_b_and_cin | a_and_b);
  return result;
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