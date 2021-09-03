#include <iostream>
using namespace std;

int main() {
  int arr[10]; // arr is an array of size 10, holding ints

  int i = 0;
  while (i < 10) {
    cout << "Enter the element at index " << i << ": ";
    cin >> arr[i];

    i++;
  }

  // now our array is populated!

  // let's go (iterate) through the array and print everything out
  for (int j = 0; j < 10; j++) {
    cout << arr[j] << " ";
  }
  cout << endl;

  // compute the sum of all the elements
  int sum = 0;
  for (int k = 0; k < 10; k++) {
    sum = sum + arr[k]; // sum += arr[k];
  }
  cout << "the sum of all the elements is: " << sum << endl;

  // find the minimum!
  // step 1: make a guess that the 0th elem is the min
  int min = arr[0];
  // go through the rest of the array and update the guess as
  // necessary
  for (int l = 1; l < 10; l++) {
    if (arr[l] < min) {
      // update our guess, because we found something smaller
      min = arr[l];
    }
  }
  // min now holds the true min
  cout << "the minimum element is: " << min << endl;
  


  return 0;
}
