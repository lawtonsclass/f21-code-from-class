#include <iostream>
using namespace std;

class Counter {
  public:
    int count;

    void init() {
      count = 0;
    }

    void inc() {
      count = count+1;
    }

    int getCount() {
      return count;
    }
};

int main() {
  Counter c;
  c.init(); // start the count at 0
  c.inc(); // increment the counter!
  c.inc(); // increment the counter!
  c.inc(); // increment the counter!
  cout << c.getCount() << endl;

  return 0;
}
