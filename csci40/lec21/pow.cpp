#include <iostream>
using namespace std;

// recursively computes m^n
double pow(double m, int n) {
  if (n == 0) {
    return 1.0; // base case
  } else {
    return m * pow(m, n-1); // recursive case
  }
}

int main() {
  cout << pow(2.0, 5) << endl; 

  return 0;
}
