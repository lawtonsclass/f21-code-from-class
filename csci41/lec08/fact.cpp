#include <iostream>
using namespace std;

int fact(int n) {
  if (n == 0) return 1; // base case: 0! = 1
  else return n * fact(n-1); // recursive case: n! = n*(n-1)!
}

int main() {
  cout << fact(4) << endl;

  return 0;
}
