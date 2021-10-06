#include <iostream>
using namespace std;

// this is how every C++ standard library begins
namespace std {
  ////////
}

namespace foo {
  int blah(int x) { return x + 1; }
  int x = 43;
}

namespace bar {
  int blah(int x) { return x + 42; }
  int x = 44;
}

int main() {
  cout << foo::x << endl;
  cout << bar::x << endl;

  cout << foo::blah(2) << endl;
  cout << bar::blah(2) << endl;

  return 0;
}
