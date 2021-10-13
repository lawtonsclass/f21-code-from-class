#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 2, 3};
  cout << arr << endl;
  cout << *arr << endl;
  cout << endl;

  cout << (arr+1) << endl; // addr of arr[1]
  cout << &arr[1] << endl;
  cout << *(arr+1) << endl;
  cout << arr[1] << endl;

  return 0;
}
