#include <iostream>
using namespace std;

void increment_by_value(int x) {
  x++;
}

void increment_by_reference(int& x) {
  x++;
}

int main() {
  int v = 42;
  increment_by_value(v);
  cout << v << endl;
  increment_by_reference(v);
  cout << v << endl;

  return 0;
}
