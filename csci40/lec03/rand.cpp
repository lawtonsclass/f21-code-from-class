#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  // seed the random number generator
  srand(time(0));

  cout << rand() << endl;
  cout << rand() << endl;
  cout << rand() << endl;

  char a = rand() % 128;
  char b = rand() % 128;
  char c = rand() % 128;
  cout << a << b << c << endl;

  int n;
  cout << "Enter a number: ";
  cin >> n;

  // output a random number between 1 and n
  // rand() % n gets us between 0 and n-1
  // + 1 gets us between 1 and n
  cout << (rand() % n) + 1 << endl;

  return 0;
}
