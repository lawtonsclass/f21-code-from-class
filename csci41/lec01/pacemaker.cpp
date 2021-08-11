#include <iostream>
using namespace std;

int main() {
  int n;
  int count = 0;
  int currentMax;

  cout << "Enter a number: ";
  cin >> n;
  while (n != -1) {
    if (count == 0 || n > currentMax) {
      currentMax = n; // first # is the max initially
    }

    count++;

    cout << "Enter a number: ";
    cin >> n;
  }

  cout << "Max: " << currentMax << endl;
  cout << "Count: " << count << endl;

  return 0;
}
