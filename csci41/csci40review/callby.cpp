#include <iostream>
using namespace std;

void swap_value(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}

void swap_reference(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}

void swap_pointer(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int x = 42, y = 43;

  swap_value(x, y); // won't work
  cout << x << " " << y << endl;
  swap_reference(x, y); // will work!
  cout << x << " " << y << endl;
  swap_pointer(&x, &y); // will work!
  cout << x << " " << y << endl;

  return 0;
}
