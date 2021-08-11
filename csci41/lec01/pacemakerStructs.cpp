#include <iostream>
#include <vector>
using namespace std;

struct Stats {
  int count;
  int currentMax;
  vector<int> nums;
};

int main() {
  int n;
  Stats s;
  s.count = 0;

  cout << "Enter a number: ";
  cin >> n;
  while (n != -1) {
    if (s.count == 0 || n > s.currentMax) {
      s.currentMax = n; // first # is the max initially
    }

    s.nums.push_back(n); // add the number that we just saw

    s.count++;

    cout << "Enter a number: ";
    cin >> n;
  }

  cout << "Max: " << s.currentMax << endl;
  cout << "Count: " << s.count << endl;
  for (int num : s.nums) {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}
