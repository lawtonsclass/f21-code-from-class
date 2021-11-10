#include "searching.h"

int linearSearch(const std::vector<int>& v, int valToSearchFor) {
  for (int i = 0; i < v.size(); i++) {
    if (v.at(i) == valToSearchFor) {
      return i; // we found the value! Let's return the index of it.
    }
  }

  // if we get here, we didn't find the value :(
  return -1;
}

// v is guaranteed to be sorted!
int binarySearch(const std::vector<int>& v, int valToSearchFor) {
  // set up our search space to initially be the whole vector
  int lo = 0, hi = v.size()-1;

  while (lo <= hi) {
    // get the middle index, and check the element there
    int mid = (lo + hi) / 2;
    int midVal = v.at(mid);

    if (valToSearchFor < midVal) {
      // go to the left
      hi = mid - 1;
    } else if (valToSearchFor > midVal) {
      // go to the right
      lo = mid + 1;
    } else {
      // we found the value!
      return mid;
    }
  }

  // if we get here and haven't returned yet, that means lo passed hi
  // and our search space is empty :(
  return -1;
}
