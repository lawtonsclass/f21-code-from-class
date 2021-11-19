#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v = {1, 2, 3}; 

  for (int i = 0; i < v.size(); i++) {
    cout << v.at(i) << " ";
  }
  cout << endl;

  // this time with iterators!
  for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    // pretend that it is a pointer to the current element
    // you can "dereference" it
    cout << *it << " ";
  }
  cout << endl;

  // the range-based for loop is secretly translated into the above
  // loop using iterators
  for (int x : v) {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}
