#include <iostream>
using namespace std;

int main() {
  int* p; // p is a pointer to an int
  // p can hold the address of an int variable
  cout << p << endl;

  p = nullptr; // the null pointer is an address (0) that doesn't exist
  cout << p << endl;

  int x = 5;
  cout << &x << endl;
  p = &x; // p now holds the addr. of x
  cout << p << endl;

  cout << *p << endl; // follow p to the addr. it's pointing to, and access the val there
  cout << endl;

  *p = 6;
  *p = *p + 1;
  cout << *p << endl;
  cout << x << endl;

  cout << endl;

  char c = 'a';
  double d = 3.14;
  char* p2 = &c;
  double* p3 = &d;
  cout << *p2 << endl;
  cout << *p3 << endl;


  return 0;
}
