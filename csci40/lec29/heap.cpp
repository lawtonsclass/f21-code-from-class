#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int* x = new int;
  *x = 42;
  cout << x << endl;
  cout << *x << endl;
  (*x)++;
  *x = *x * 2;
  cout << *x << endl;

  delete x;

  ///////////////////////////////

  int n;
  cout << "Enter the size of the array: ";
  cin >> n;
  int* arr = new int[n]; // makes an array called arr of size n on the heap

  // get n things from the user
  for (int i = 0; i < n; i++) {
    cout << "Enter the next number: ";
    cin >> arr[i];
  }

  // calculate the median of the n things
  // sort the array first
  sort(arr, arr + n);
  // now we need to find the middle element
  double median;
  if (n % 2 == 1) {
    // odd: easy case
    int middleIndex = n / 2;
    median = arr[middleIndex];
  } else {
    // even: we have to average the two middle elements
    int middleIndex2 = n / 2;
    int middleIndex1 = n / 2 - 1;
    median = (arr[middleIndex1] + arr[middleIndex2]) / 2.0;
  }
  cout << "median: " << median << endl;

  delete[] arr;

  return 0;
}
