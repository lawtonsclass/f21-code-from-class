#include <iostream>
using namespace std;

int fib(int n) {
  if (n == 0) return 0;
  else if (n == 1) return 1;
  else return fib(n-2) + fib(n-1);
}

int fib2(int n) {
  int nMinus1 = 0;
  int nMinus2 = 1;
  // ...
  // O(n) total for the iterative version
}

int main() {
  cout << fib(0) << endl;
  cout << fib(1) << endl;
  cout << fib(2) << endl;
  cout << fib(3) << endl;
  cout << fib(4) << endl;
  cout << fib(200) << endl; // oof

  return 0;
}
