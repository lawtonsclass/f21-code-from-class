#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 4; i++) { // do 4 times
    // print 4 *s
    for (int j = 0; j < 4; j++) {
      cout << "*";
    }
    // print a \n
    cout << "\n";
  }

  cout << "\n";

  for (int i = 0; i < 4; i++) { // do 4 times
    for (int j = 0; j < 4; j++) {
      if (i >= 1 && i <= 2 && j >= 1 && j <= 2) {
        cout << " ";
      } else {
        cout << "*";
      }
    }
    // print a \n
    cout << "\n";
  }

  cout << "\n";

  // right triangle
  for (int i = 0; i < 4; i++) { // do 4 times
    // have the # of stars printed on each line be controlled by i!
    for (int j = 0; j < i+1; j++) {
      cout << "*";
    }
    // print a \n
    cout << "\n";
  }

  return 0;
}
