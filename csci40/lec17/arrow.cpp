#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string s = "blah";
  string* sp = &s;
  cout << (*sp).size() << endl;
  // -> is shorthand for both * and .
  cout << sp->size() << endl;

  vector<int> v = {1, 2, 3};
  vector<int>* vp = &v;
  cout << vp->at(1) << endl;

  

  return 0;
}
