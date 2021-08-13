#include <iostream>
using namespace std;

int main() {
  int x;

  x = 42;
  cout << x << endl;

  x = 43 + 2;
  cout << x << endl;

  x = x + 1;
  cout << x << endl;
  x += 1; // same as x = x + 1;
  cout << x << endl;
  x++; // same as x = x + 1;
  cout << x << endl;

  return 0;
}
