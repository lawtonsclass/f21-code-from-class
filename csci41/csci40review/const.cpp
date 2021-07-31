#include <iostream>
using namespace std;

// it's common practice to make parameters const when we know we don't
// need to change them
int add1(const int& x) {
  // x++; // const is protecting me from making a mistake like this!
  return x + 1;
}

int main() {
  const int x = 42;
  // x++; // not allowed to do this, which is exactly what we want!

  int y = 43;
  const int z = y;

  cout << add1(y) << endl; // y gets converted "up" to a const

  return 0;
}
