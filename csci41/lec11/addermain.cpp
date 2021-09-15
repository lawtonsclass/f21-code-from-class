#include <iostream>
using namespace std;

// the .h file includes the implementation!!!
#include "adder.h"

int main() {
  Adder<int> a;  
  a.x = 42;
  a.y = 43;
  cout << a.add() << endl;

  Adder<string> b;  
  b.x = "42";
  b.y = "43";
  cout << b.add() << endl;

  return 0;
}
