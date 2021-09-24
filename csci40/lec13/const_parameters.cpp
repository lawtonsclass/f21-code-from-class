#include <iostream>
#include <vector>
using namespace std;

int sum_vector(const vector<int>& v);

int main() {
  int x = 42;
  const int x_copy = x; // key idea: we can "up-convert" to a const!

  x++;
  // x_copy++; // can't do this
  
  vector<int> vec = {8, 6, 7, 5, 3, 0, 9};
  // when we call sum_vector, C++ does: const vector<int>& v = vec;
  cout << sum_vector(vec) << endl;
  cout << vec.at(0) << endl;

  return 0;
}

int sum_vector(const vector<int>& v) {
  // v.at(0) = 42; 
  // ^ I don't want to be able to do this, even accidentally!

  int sum = 0;
  // go through v and add every val to the sum var
  for (int i = 0; i < v.size(); i++) {
    sum += v.at(i);
  }

  return sum;
}
