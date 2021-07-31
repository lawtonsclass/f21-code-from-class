#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v = {42, 43, 44};
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);

  for (int i = 0; i < v.size(); i++) {
    cout << v.at(i) << endl;
  }

  cout << endl;

  // range-based for loop (equivalent to above)
  for (int i : v) {
    cout << i << endl;
  }

  // cout << v.at(6) << endl; // this throws an exception (and stops
  // the program if we don't *handle* it)

  return 0;
}
