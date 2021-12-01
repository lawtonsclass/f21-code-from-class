#include <iostream>
#include <vector>
using namespace std;

void swap_by_value(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}

void swap_by_reference(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}

int sum_vector(const vector<int>& v) {
  int sum = 0;
  for (int x : v) {
    sum += x;
  }
  return sum;
}

int main() {
  int x = 42, y = 43;

  swap_by_value(x, y);
  cout << x << " " << y << endl;

  swap_by_reference(x, y);
  cout << x << " " << y << endl;

  vector<int> v(1000, 42); // v holds 1000 elems, all set to 42
  cout << sum_vector(v) << endl;

  return 0;
}
