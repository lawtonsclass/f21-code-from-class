#include <iostream>
#include <vector>
#include <algorithm> // for std::sort
using namespace std;

class Holder {
  public:
    Holder(int x): x(x) {}
    int getX() const { return x; }
  private:
    int x;
};

// option 1
bool operator<(const Holder& a, const Holder& b) {
  return a.getX() < b.getX();
}

// option 2
bool holderCompare(const Holder& a, const Holder& b) {
  return a.getX() < b.getX();
}

class HolderComparisonClass {
  public:
    bool operator()(const Holder& a, const Holder& b) {
      return a.getX() < b.getX();
    }
};

int main() {
  Holder h1(112);
  Holder h2(42);
  Holder h3(27);

  vector<Holder> v = {h1, h2, h3}; // sorting this should make {h3, h2, h1}

  // sort(v.begin(), v.end()); // option 1
  
  // sort(v.begin(), v.end(), holderCompare); // option 2

  HolderComparisonClass hc;
  sort(v.begin(), v.end(), hc); // option 3

  for (const Holder& h : v) {
    cout << h.getX() << " ";
  }
  cout << endl;

  return 0;
}
