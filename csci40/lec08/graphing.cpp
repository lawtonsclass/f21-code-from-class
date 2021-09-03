#include <iostream>
#include <cmath>
using namespace std;

int main() {
  for (int y = 12; y >= -11; y--) {
    for (int x = -38; x <= 39; x++) {
      if (y == round(sqrt(100 - x*x))) { // on the graph
        cout << "*";
      } else if (y == round(-sqrt(100 - x*x))) { // also on the graph
        cout << "*";
      } else if (x == 0 && y == 0) {
        cout << "+"; // origin
      } else {
        cout << " "; // empty space
      }
    }
    cout << endl;
  }

  return 0;
}
