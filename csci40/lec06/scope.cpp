#include <iostream>
using namespace std;

int main() {
  int i = 42;  // this i lives until main's closing brace

  if (2 < 3) {
    int j = 43;  // this j lives until the if statement's closing brace
    cout << i << endl;
    cout << j << endl;

    int i = 44; // this *shadows* the outer i
    cout << i << endl;
  }

  cout << i << endl;
  // cout << j << endl; // j no longer exists!

  return 0;
}
