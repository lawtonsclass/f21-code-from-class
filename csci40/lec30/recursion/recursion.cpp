#include "recursion.h"
using namespace std;

// computes x^n
double pow(double x, int n) {
  if (n == 0) {
    // base case
    return 1.0;
  } else {
    // recursive case
    return x * pow(x, n-1);
  }
}

int binarySearch(const vector<int>& v, int val, int lo, int hi) {
  // base case: search space is empty
  if (lo > hi) {
    return -1;
  }

  // find the mid index
  int mid = (lo + hi) / 2;
  // see which way we should search based on the value at the mid
  // index
  if (val < v.at(mid)) {
    // mid was too big! search to the left.
    // hi = mid-1;
    return binarySearch(v, val, lo, mid-1);
  } else if (val > v.at(mid)) {
    // mid was too small! search to the right.
    // lo = mid+1;
    return binarySearch(v, val, mid+1, hi);
  } else {
    // we found it!
    return mid;
  }
}

