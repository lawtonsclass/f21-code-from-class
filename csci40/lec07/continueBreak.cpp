#include <iostream>
using namespace std;

int main() {
  // print from 1 to 10, skipping 3
  for (int i = 1; i <= 10; i++) {
    if (i == 3) {
      continue; // skip the rest of the i=3 body
    }
    cout << i << endl;
  }
  
  // get a bunch of chars from the user until the user types q
  char c;
  while (true) { // loop forever until we break
    cout << "Enter a char: ";
    cin >> c;
    if (c == 'q') {
      break; // exit the loop
    }
    cout << c << endl;
  }

  return 0;
}
