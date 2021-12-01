#include <iostream>
#include <vector>
using namespace std;

int main() {
  int x = 42;
  int* y = &x;
  int** z = &y;

  cout << x << " " << y << " " << z << endl;
  cout << x << " " << *y << " " << **z << endl;

  vector<int> v = {1, 2, 3};
  vector<int>* vp = &v;
  // get the size of v by going through vp
  cout << (*vp).size() << " " << vp->size() << endl;

  return 0;
}
