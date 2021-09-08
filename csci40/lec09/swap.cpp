#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 2, 3};
  cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;

  // swap indices 1 and 3 using a temp var
  int temp = arr[0];
  arr[0] = arr[2];
  arr[2] = temp;

  cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;

  return 0;
}
