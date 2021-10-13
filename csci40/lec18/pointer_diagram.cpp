#include <iostream>
using namespace std;

int main() {
  int x = 5;
  int* p = &x;
  int* q = &x;
  int** r = &q;

  cout << x << endl;
  cout << *p << endl;
  cout << *q << endl;
  cout << **r << endl; // (*r) by itself gets you to q

  return 0;
}
