#include <iostream>
using namespace std;

void uhoh() {
  int* i = nullptr;
  cout << *i << endl;
}

int main() {
  uhoh();

  return 0;
}
