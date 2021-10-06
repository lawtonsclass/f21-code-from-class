#include <iostream>
using namespace std;

class Counter {
  public:
    void init();
    void reset(int newCount);
    void inc();
    void dec();
    int getCount() const;

  private:
    int count;
};

void Counter::init() {
  count = 0;
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

int main() {
  Counter c;
  c.init();
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

  return 0;
}
