#include <iostream>
#include <string>
using namespace std;

int factorial(int x);

// b is a condition that we want to be true
// if it's true, we passed the test
void assertTrue(bool b, string description) {
  if (b) {
    cout << "PASSED: " << description << endl;
  } else {
    cout << "FAILED: " << description << endl;
  }
}

int main() {
  // a test case using if
  if (factorial(4) == 24) {
    cout << "PASSED: 4!\n";
  } else {
    cout << "FAILED: 4!\n";
  }
  // the test case above using assertTrue
  assertTrue(factorial(4) == 24, "4!");
  assertTrue(factorial(1) == 1, "1!");
  assertTrue(factorial(2) == 2, "2!");
  assertTrue(factorial(-2) == -1, "-2! should just return -1");

  return 0;
}

int factorial(int x) {
  if (x < 0) {
    return -1; // return early!
  }

  int product = 1;
  for (int i = 1; i <= x; i++) {
    product = product * i;
  }
  return product;
}
