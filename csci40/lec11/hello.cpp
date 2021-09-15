#include <iostream>
using namespace std;

// void because we have nothing to give back!
// no need to return anything
void hello() {
  cout << "hello" << endl;
}

int main() {
  hello(); // please go and print hello

  hello();
  hello();

  return 0;
}
