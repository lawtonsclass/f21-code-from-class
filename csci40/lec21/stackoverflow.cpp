#include <iostream>
using namespace std;

// no base case :(
int fact1(int n) {
  return n * fact1(n-1);
}

// recursive case not getting smaller :(
int fact2(int n) {
  if (n == 1) {
    return 1;
  } else {
    return fact2(n);
  }
}

int main() {
  // cout << fact1(5) << endl; 
  cout << fact2(5) << endl; 

  return 0;
}
