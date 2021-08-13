#include <iostream>
#include <iomanip> // for setprecision
using namespace std;

int main() {
  int x = 5;
  cout << (x / 2) << endl;

  cout << (x / 2.0) << endl;

  int y = 2;
  cout << (x / y) << endl;
  cout << (x / static_cast<double>(y)) << endl;

  // let's say I want to print the next double with 3 decimal places
  cout << fixed << setprecision(3) << (x / 2.0) << endl;

  return 0;
}
