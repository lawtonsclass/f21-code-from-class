#include <iostream>
using namespace std;

// negates an int not using -, but using ~ and +
int negate_2s_complement(int x) {
  return (~x) + 1;
}

int main() {
  cout << (11 & 6) << endl;

  // if this is nonzero, that means bit 3 was set!
  cout << (11 & 8) << endl;
  if ((11 & 8) != 0) {
    cout << "bit 3 of 11 was set!\n";
  }

  cout << endl;

  cout << (9 | 12) << endl;
  cout << (10 | 1) << endl;

  cout << endl;

  // remember that ints are 32 bits long. Flipping all of them is
  // going to make a number with a lot of 1s in it. It will have a 1
  // in the 31st bit (leftmost), which marks it as a negative number.
  cout << (~9) << endl;
  cout << negate_2s_complement(9) << endl;
  cout << negate_2s_complement(-9) << endl;

  cout << endl;

  cout << (11 ^ 5) << endl;

  cout << endl;

  // let's set the 3rd bit of the number 3
  cout << (3 | (1 << 3)) << endl;

  cout << endl;

  int x = 42;
  x = x ^ (1 << 4);
  cout << ((x & (1 << 4)) != 0) << endl; // this code extracts the 4th bit as true/false
  x = x ^ (1 << 4);
  cout << ((x & (1 << 4)) != 0) << endl;

  return 0;
}
