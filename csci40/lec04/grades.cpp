#include <iostream>
using namespace std;

int main() {
  double grade;
  cin >> grade;

  if (grade >= 90) {
    cout << "A\n";
  } else if (grade >= 70) {
    cout << "C\n";
  } else {
    cout << "F\n";
  }

  return 0;
}
