#include <iostream>
using namespace std;

// recursively computes n!
int fact(int n) {
  if (n == 1) {
    // we're in the base case
    return 1;
  } else {
    // we're in the recursive case
    // we're calling OURSELVES here! (with a smaller argument)
    return n * fact(n-1);
  }
}

int main() {
  cout << fact(5) << endl; 

  return 0;
}
