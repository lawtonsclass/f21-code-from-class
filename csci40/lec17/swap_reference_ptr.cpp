#include <iostream>
using namespace std;

void swap_by_reference(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}

void swap_by_pointer(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int x = 42;
  int y = 43;

  swap_by_reference(x, y);
  cout << x << " " << y << endl;

  swap_by_pointer(&x, &y);
  cout << x << " " << y << endl;


  return 0;
}
