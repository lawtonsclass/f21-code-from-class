#include <iostream>
using namespace std;

extern "C" int sumArray(int arr[], int size);

int main() {
  int a[] = {8, 6, 7, 5, 3, 0, 9};  

  cout << sumArray(a, 7) << endl;

  return 0;
}
