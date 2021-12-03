#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

// computes x^n
double pow(double x, int n) {
  if (n < 0) {
    throw runtime_error("pow can't handle negative exponents!");
  }

  if (n == 0) {
    // base case
    return 1.0;
  } else {
    // recursive case
    return x * pow(x, n-1);
  }
}

// returns x with the bit #whichBit set
int flipBit(unsigned int x, int whichBit) {
  if (whichBit < 0 || whichBit > 31) {
    throw 42;
  }

  // xor x with (1 << whichBit)
  return x ^ (1 << whichBit);
}

int main() {
  try {
    cout << pow(2.5, -5) << endl;
  } catch (runtime_error& e) {
    cout << "oops!\n";
    cout << e.what() << endl;
  }

  try {
    cout << flipBit(13, 33) << endl;
  } catch (int& i) {
    cout << "caught " << i << endl;
  }

  return 0;
}
