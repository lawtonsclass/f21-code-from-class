#include <iostream>
using namespace std;

void printFrom1To(int n) {
  if (n == 0) {
    // base case: there are no numbers between 1 and 0 to print!
    return;
  } else {
    // recursive case
    // recursively print from 1 to n-1
    printFrom1To(n-1);
    // print n
    cout << n << endl;
  }
}

void printReverse(int n) {
  if (n == 0) {
    // base case: there are no numbers to print!
    return;
  } else {
    // recursive case
    // print n
    cout << n << endl;
    // recursively print from n-1 to 1
    printReverse(n-1);
  }
}

int main() {
  printFrom1To(5); 
  cout << endl;
  printReverse(5);

  return 0;
}
