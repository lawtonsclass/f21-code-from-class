#include <iostream>
using namespace std;

int main() {
  cout << "Enter a #: ";
  int input;
  cin >> input;

  if (input % 2 == 0) {
    // even!
    cout << "Even!\n";
  } else {
    cout << "Odd!\n";
  }

  return 0;
}
