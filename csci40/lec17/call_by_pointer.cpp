#include <iostream>
using namespace std;

// call-by-pointer / call-by-address
void birthday(int* a) {
  *a = *a + 1;
}

int main() {
  int age = 19;
  cout << age << endl;
  birthday(&age);
  cout << age << endl;

  return 0;
}


