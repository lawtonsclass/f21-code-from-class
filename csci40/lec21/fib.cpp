#include <iostream>
using namespace std;

// recursively calculates the nth Fibonacci number
int fib(int n) {
  if (n == 0) {
    return 0; // base case #0
  } else if (n == 1) {
    return 1; // base case #1
  } else {
    // recursive case: sum the two previous Fibonacci numbers
    return fib(n-1) + fib(n-2);
  }
}

int main() {
  cout << fib(6) << endl;

  return 0;
}
