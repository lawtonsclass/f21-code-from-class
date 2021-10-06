#include <iostream>
#include <vector>
using namespace std;

class Foo {
  public:
    Foo() : d(3.14), v(3, 1) {
      // once you get to the body of the constructor, it's too late to
      // set a const member var!
      // d = 3.14;
      // technically, setting v here is inefficient--it got
      // constructed already!
      // v = {1, 1, 1};
    }

    const double d;
    vector<int> v;
};

int main() {
  Foo f; 
  cout << f.d << endl;

  vector<int> v2; // default vector constructor starts it as empty!
  vector<int> v3(3, 1); // fill constructor
  int x(42); // constructor-style initialization (same as int x = 42;)

  return 0;
}
