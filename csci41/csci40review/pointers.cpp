#include <iostream>
using namespace std;

int add1(int* p) {
  return *p + 1; // follows p to the int that it's pointing to and adds 1
}

int main() {
  int x = 42;

  cout << add1(&x) << endl;

  return 0;
}
