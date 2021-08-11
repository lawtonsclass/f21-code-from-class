#include <iostream>
#include <vector>
#include <string>
using namespace std;

void assertTrue(bool b, string description) {
  if (!b) {
    cout << "FAILED: " << description << endl;
  } else {
    cout << "PASSED: " << description << endl;
  }
}

class Statistician {
 public:
  // operations
  void addNumber(int n);
  int getMax();
  double average();
  void init(); // initializes every member var

  // it's okay for this function to access my member vars!
  friend void add1ToEveryNum(Statistician& s);

 private:
  // data
  int count;
  int currentMax;
  vector<int> nums;
};

void Statistician::init() {
  nums = {42};
  currentMax = 42;
  count = 1;
}

void Statistician::addNumber(int n) {
  if (count == 0 || n > currentMax) {
    currentMax = n;
  }

  nums.push_back(n); // sometimes immediate, sometimes iterates through the existing vector
  count++;
}

int Statistician::getMax() {
  return currentMax;
}

double Statistician::average() {
  double avg = 0.0;
  for (int n : nums) avg += n;
  avg = avg / nums.size();
  return avg;
}

// this is just a regular function
void add1ToEveryNum(Statistician& s) {
  for (int i = 0; i < s.nums.size(); i++) {
    s.nums.at(i)++;
  }
}

void testMax() {
  // Make a new Statistician s
  Statistician s;
  // Call init() on it
  s.init();
  // getMax() should return 42 right now
  assertTrue(s.getMax() == 42, "getmax == 42");
  // Add 43 to s
  s.addNumber(43);
  // getMax() should return 43 now
  assertTrue(s.getMax() == 43, "getmax == 43");
  // Add 44 to s
  s.addNumber(44);
  // getMax() should return 44 now
  assertTrue(s.getMax() == 44, "getmax == 44");
  // Add 0 to s
  s.addNumber(0);
  // getMax() should still return 44
  assertTrue(s.getMax() == 44, "getmax == 44");
}

int main() {
  int n;
  Statistician s;
  s.init();

  cout << "Enter a number: ";
  cin >> n;
  while (n != -1) {
    s.addNumber(n);

    cout << "Enter a number: ";
    cin >> n;
  }

  add1ToEveryNum(s);

  cout << "Max: " << s.getMax() << endl;
  cout << "Average: " << s.average() << endl;
  // can't access count/nums anymore--that really good!
  // we don't want the user to mess with our stuff!

  testMax();

  return 0;
}
