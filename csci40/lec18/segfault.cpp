#include <iostream>
using namespace std;

void foo() {
  int* p = nullptr;
  int x = 42;
  cout << *p << endl; // uh oh...
}

int main() {
  foo();

  return 0;
}
