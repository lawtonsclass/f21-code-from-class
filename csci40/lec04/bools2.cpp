#include <iostream>
using namespace std;

int main() {
  bool t = true;
  bool f = false;

  if (t && t) {
    cout << "true!\n";
  } else {
    cout << "false!\n";
  }

  if (t && f) {
    cout << "true!\n";
  } else {
    cout << "false!\n";
  }

  if (f && t) {
    cout << "true!\n";
  } else {
    cout << "false!\n";
  }

  if (f && f) {
    cout << "true!\n";
  } else {
    cout << "false!\n";
  }

  return 0;
}
