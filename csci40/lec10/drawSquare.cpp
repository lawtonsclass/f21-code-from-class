#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) {
  // make sure argc is 2
  if (argc != 2) {
    cout << "Usage: " << argv[0] << " n\n";
    // stop the program
    exit(0);
  }

  // if we got this far, we have something in argv[1]
  int width = atoi(argv[1]); // "42" --> 42

  // draw square using the width
  for (int i = 0; i < width; i++) {
    for (int j = 0; j < width; j++) {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}
