#include <iostream>
#include <vector>
#include "counter.h"
using namespace std;


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

