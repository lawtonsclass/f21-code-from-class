#include <iostream>
#include <vector>
#include "recursion.h"
using namespace std;

int main() {
  cout << pow(2.5, 5) << endl; 

  vector<int> v = {0, 3, 5, 6, 7, 8, 9};

  cout << binarySearch(v, 5, 0, v.size()-1) << endl;
  cout << binarySearch(v, 4, 0, v.size()-1) << endl;
  cout << binarySearch(v, 9, 0, v.size()-1) << endl;

  return 0;
}
