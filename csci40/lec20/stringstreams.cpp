#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
  stringstream ss;
  ss << 100 << endl << 200; // now, ss holds "100\n200"

  cout << ss.str() << endl; // get the entire built-up string

  int x, y;
  ss >> x >> y; // get two ints out of the built-up string inside ss
  cout << x << " " << y << endl;

  return 0;
}
