
// RIPPLE CARRY ADDER --> INTRODUCES A DELAY BUT IT'S LESS COMPLEX
typedef struct {
  int sum[4];
  int carry_out;
} FourBitAdderResult;

FourBitAdderResult four_bit_adder(int A[4], int B[4]) {
  FourBitAdderResult result;
  int carry = 0;

  for (int i = 0; i < 4; i++) {
    FullAdderResult fa_result = full_adder(A[i], B[i], carry);
    result.sum[i] = fa_result.sum;
    carry = fa_result.carry_out;
  }

  result.carry_out = carry;
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