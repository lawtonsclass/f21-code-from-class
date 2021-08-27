#include <iostream>
using namespace std;

int main() {
  int a, b;
  cout << "Enter a & b separated by a space: ";
  cin >> a >> b;

  while (b != 0) {
    int original_b = b; // save b's value for later
    b = a % b;
    a = original_b;
  }
  // once we get here, b is *guaranteed* to be 0!

  cout << "The GCD is: " << a << endl;

  return 0;
}
