#ifndef COUNTER_H
#define COUNTER_H

#include <vector>

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
  std::vector<int> v;
  const double pi;
};

#endif /* end of include guard: COUNTER_H */
