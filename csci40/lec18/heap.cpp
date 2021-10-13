#include <iostream>
using namespace std;

int* foo() {
  int* n = new int; // n points to a new int on the heap
  *n = 42;
  cout << *n << endl;
  return n;
}

int main() {
  int* p = foo(); // the heap memory lives forever, so it's okay to use it down here too!
  cout << *p << endl;
  delete p; // reclaims the heap memory that p/foo's n is/was pointing to

  return 0;
}
