#include <iostream>
using namespace std;

int main() {
  bool b = true;
  bool b2 = 42 > 43;

  cout << "Enter a #: ";
  int input;
  cin >> input;

  bool cond = input % 2 == 0;
  if (cond) {
    // even!
    cout << "Even!\n";
  } else {
    cout << "Odd!\n";
  }

  return 0;
}
