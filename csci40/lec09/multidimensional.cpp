#include <iostream>
using namespace std;

int main() {
  int arr[3][3]; // there are 3x3 = 9 elements of the array!
  arr[2][1] = 42; // you can index into arr twice!
  cout << arr[2][1] << endl;

  return 0;
}
