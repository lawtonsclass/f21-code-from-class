#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};

  // reverse v
  for (int i = 0; i < v.size() / 2; i++) {
    // swap indices i and size - i - 1
    int temp = v.at(i);
    v.at(i) = v.at(v.size() - i - 1);
    v.at(v.size() - i - 1) = temp;
  }

  for (int j = 0; j < v.size(); j++) {
    cout << v.at(j) << " ";
  }
  cout << endl;

  return 0;
}
