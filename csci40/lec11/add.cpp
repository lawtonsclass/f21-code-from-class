#include <iostream>
#include <string>
using namespace std;

int add(int x, int y) {
  // give back the sum of x and y
  return x + y; // return gives back an answer to whoever called us
}

string add(string x, string y) {
  // give back the sum of x and y
  return x + y; // return gives back an answer to whoever called us
}

int main() {
  int a = 42;
  int b = 43;

  cout << add(a, b) << endl;
  cout << add(1, 3) << endl;

  cout << add("hello", "world") << endl;

  return 0;
}
