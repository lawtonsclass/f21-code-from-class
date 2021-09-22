#include <iostream>
using namespace std;

int main() {
  int y = 42;
  int& x = y; // x is a ref to y

  y++;
  x++;

  cout << y << endl;
  cout << x << endl;

  x = 45;

  cout << y << endl;
  cout << x << endl;

  y = 47;

  cout << y << endl;
  cout << x << endl;

  return 0;
}
