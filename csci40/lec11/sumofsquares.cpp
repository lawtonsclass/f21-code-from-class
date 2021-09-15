#include <iostream>
using namespace std;

// int sumOfSquaresFrom1To(int n) {
  // return -1; // a stub--just give back something to let the program compile
// }

// this is a function declaration
// it's enough to make main stop complaining
// you still need to define the function somewhere
int sumOfSquaresFrom1To(int n);
int square(int x);
int add(int a, int b);

int main() {
  cout << "Enter a number n: ";
  int n;
  cin >> n;

  cout << sumOfSquaresFrom1To(n) << endl;

  return 0;
}

int square(int x) {
  return x*x;
}

int add(int a, int b) {
  return a+b;
}

int sumOfSquaresFrom1To(int n) {
  int sum = 0;

  // enumerate the #s 1 to n
  for (int i = 1; i <= n; i++) {
    // square each i
    int i_squared = square(i);
    // add i into a sum variable
    sum = add(sum, i_squared);
  }

  // final answer will be in the sum variable
  return sum;
}
