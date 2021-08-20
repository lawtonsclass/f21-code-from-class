#include <iostream>
#include "counter.h"
using namespace std;

Counter operator*(const Counter& c1, const Counter& c2) {
  Counter ret;
  ret.count = c1.count * c2.count;

  return ret;
}

ostream& operator<<(ostream& os, const Counter& c) {
  // pretend that os is cout
  // (you can use << on it!)
  os << "Counter with count " << c.getCount();

  // always return the same output stream
  return os;
}


int main() {
  Counter c(42); // the constructor is being implicitly called for us!
  c.inc();
  c.inc();
  c.inc();
  cout << c.getCount() << endl;

  Counter c2; // default constructor used here
  c2.inc();
  c2.inc();
  c2.inc();
  c2.inc();
  c2.inc();
  cout << c2.getCount() << endl;

  vector<int> v2(100, 42); // starts the vector with 100 elements, all of which are 42!

  c.reset(55);

  Counter* cPointer = &c;
  cout << (*cPointer).getCount() << endl;
  cout << cPointer->getCount() << endl; // -> is short for * and then .

  Counter c3 = c + c2;
  // when we say + between 2 counters, C++ tries to call:
  //   - c.operator+(c2);
  //   - operator+(c, c2);
  cout << c3.getCount() << endl;

  Counter c4 = c * c2; // operator*(c, c2)
  cout << c4.getCount() << endl;

  cout << c4 << endl; // operator<<(cout, c4)

  return 0;
}
