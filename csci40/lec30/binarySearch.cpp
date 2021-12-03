#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& v, int val) {
  int lo = 0;
  int hi = v.size() - 1;

  while (lo <= hi) {
    // find the mid index
    int mid = (lo + hi) / 2;
    // see which way we should search based on the value at the mid
    // index
    if (val < v.at(mid)) {
      // mid was too big! search to the left.
      hi = mid-1;
    } else if (val > v.at(mid)) {
      // mid was too small! search to the right.
      lo = mid+1;
    } else {
      // we found it!
      return mid;
    }
  }

  // if we ever get here, then lo > hi, which means our search space
  // is empty
  return -1;
}

int main() {
  vector<int> v = {0, 3, 5, 6, 7, 8, 9};

  cout << binarySearch(v, 5) << endl;
  cout << binarySearch(v, 4) << endl;

  return 0;
}
