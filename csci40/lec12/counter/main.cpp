#include <iostream>
#include "counter.h"
using namespace std;

void assertTrue(bool b, string description) {
  if (b) {
    cout << "PASSED: " << description << endl;
  } else {
    cout << "FAILED: " << description << endl;
  }
}

void test() {
  init_counter();
  inc();
  inc();
  inc();
  dec();
  assertTrue(get_count() == 2, "init, inc, inc, inc, dec, get_count");
}

int main() {
  init_counter();
  inc();
  inc();
  inc();
  inc();
  dec();
  dec();
  cout << get_count() << endl;
  reset(42);
  dec();
  cout << get_count() << endl;

  test();

  return 0;
}
