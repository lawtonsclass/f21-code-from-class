#include <iostream>
#include <sstream>
using namespace std;

int main() {
  stringstream ss;

  // put stuff into the stringstream, pretending that it's cout/a file
  ss << 42 << " ";
  ss << "blah" << " ";
  ss << 3.14 << endl;

  int x;
  ss >> x;
  cout << x << endl;

  // get the built-up string with .str()
  cout << ss.str();

  return 0;
}
