#include <iostream>
using namespace std;

int main() {
  cout << "Enter an array size: ";
  int n;
  cin >> n;

  int* arr = new int[n]; // make an array of size n on the heap

  // get n things to fill arr
  for (int i = 0; i < n; i++) {
    cout << "Enter the next array value: ";
    int v;
    cin >> v;
    arr[i] = v;
  }

  // calculate the sum of arr
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i]; 
  }
  cout << sum << endl;

  delete[] arr; // remember the [] for arrays made on the heap

  return 0;
}
