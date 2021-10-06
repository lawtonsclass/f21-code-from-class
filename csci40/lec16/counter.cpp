#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Counter {
  public:
    // default constructor
    Counter();
    // parameterized constructor
    Counter(int countToStartWith);

    void reset(int newCount);
    void inc();
    void dec();
    int getCount() const;

    // operators
    Counter operator+(const Counter& other);

  private:
    int count;
};

// default constructor implementation
Counter::Counter() : count(0) {
  // count = 0; // no longer needed because of the initializer list!
}

// parameterized constructor implementation
Counter::Counter(int countToStartWith) : count(countToStartWith) {
  // count = countToStartWith;
}

void Counter::reset(int newCount) {
  count = newCount;
}

void Counter::inc() {
  // int count = count + 1; // WRONG!!!!!
  count = count + 1;
}

void Counter::dec() {
  count--;
}

int Counter::getCount() const {
  // count++;
  return count;
}

Counter Counter::operator+(const Counter& other) {
  Counter res;
  res.count = count + other.count;
  return res;
}

// this is the prefix ++ operator
void operator++(Counter& c) {
  c.inc();
}

bool operator<(const Counter& c1, const Counter& c2) {
  return c1.getCount() < c2.getCount();
}

int main() {
  Counter c; // calls the default constructor for us!!
  c.inc();
  c.inc();
  c.inc();
  cout << c.getCount() << endl;

  c.reset(42);
  c.inc();
  c.inc();
  c.dec();
  c.dec();
  c.dec();
  cout << c.getCount() << endl;

  Counter d(55); // calls the parameterized constructor
  c.inc();
  c.inc();
  cout << d.getCount() << endl;

  Counter sum = c + d; // C++ tries to run either c.operator+(d) OR operator+(c, d)
  cout << sum.getCount() << endl;

  ++d; // this will secretly call operator++(d)
  ++d;
  cout << d.getCount() << endl;

  vector<Counter> v = {d, sum, c};
  // to sort a vector of Counters, we need an operator< for Counter
  // objects
  // c < d ==> c.operator<(d) OR operator<(c, d)
  sort(v.begin(), v.end());

  // v should be sorted by increasing count values now!
  for (int i = 0; i < v.size(); i++) {
    cout << v.at(i).getCount() << " ";
  }
  cout << endl;

  return 0;
}
