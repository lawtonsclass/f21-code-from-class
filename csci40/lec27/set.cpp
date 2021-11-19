#include <iostream>
#include <set>
using namespace std;

int main() {
  set<int> s;
  s.insert(2);
  s.insert(1);
  s.insert(3);

  cout << s.count(2) << endl;
  cout << s.count(5) << endl;

  for (int x : s) {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}
