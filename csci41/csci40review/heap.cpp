#include <iostream>
using namespace std;

int main() {
  int* i = new int; // "new int" returns back a pointer to a new int on the heap

  *i = 42;
  cout << *i << endl;

  // once we're done we delete it
  delete i;

  int* arr = new int[42];
  arr[1] = 42;
  arr[0] = 43;
  delete[] arr;

  return 0;
}
