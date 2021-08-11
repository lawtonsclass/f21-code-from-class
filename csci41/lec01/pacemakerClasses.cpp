
#include <iostream>
#include <vector>
using namespace std;

class Statistician {
 public:
  // operations
  void addNumber(int n);
  int getMax();
  double average();
  void init(); // initializes every member var

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

  cout << "Max: " << s.getMax() << endl;
  cout << "Count: " << s.count << endl;
  cout << "Average: " << s.average() << endl;
  for (int num : s.nums) {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}
