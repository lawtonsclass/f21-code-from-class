#include <iostream>
#include <vector>
using namespace std;

class Counter {
 public:
  Counter(); // default constructor
  Counter(int startingCount); // constructor declaration
  void inc();
  void reset(int newCount = 0); // a getter
  int getCount() const; // const because getCount shouldn't modify a member var
  // ^ getCount is a setter

  Counter operator+(const Counter& other) {
    // add the counters and give back their sum
    Counter ret;
    ret.count = count + other.count;

    // Counter ret(count + other.count); // also works!

    return ret;
  }

  // lets us do .count
  friend Counter operator*(const Counter& c1, const Counter& c2);

 private:
  int count;
  vector<int> v;
  const double pi;
};

Counter::Counter() : count(0), v(100, 42), pi(3.14) {
  // start count at 0
  // it's TOO LATE to call member variable constructors when you're in
  // the body of your Constructor
}

// this is a parameterized constructor!
Counter::Counter(int startingCount) : count(startingCount), pi(3.14) { }

void Counter::inc() {
  count++;
}

void Counter::reset(int newCount) {
  count = newCount;
}

int Counter::getCount() const {
  // count++; // this now causes a compiler error!!!
  return count;
}

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
