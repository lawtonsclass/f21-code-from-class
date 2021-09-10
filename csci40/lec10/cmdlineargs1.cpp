#include <iostream>
using namespace std;

// argc: argument count
// argv: argument vector (really an array)
int main(int argc, char* argv[]) {
  cout << argc << endl;
  
  for (int i = 0; i < argc; i++) {
    // print out argv[i]
    cout << "argv[" << i << "]: " << argv[i] << endl;
  }
  
  return 0;
}
