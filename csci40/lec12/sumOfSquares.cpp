#include "sumOfSquares.h"

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
