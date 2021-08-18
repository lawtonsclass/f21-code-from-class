#include <iostream>
#include <cstdlib> // for abs
#include <cmath> // for exp
using namespace std;

int main() {
  cout << abs(-42) + 1 << endl; 

  const double e = exp(1);
  cout << e << endl;

  cout << ceil(2.14) << endl;
  cout << floor(2.14) << endl;

  cout << round(2.5) << endl;

  return 0;
}
