#include <iostream>
using namespace std;

int main() {
  int i = 1; // start i at 1
  while (i <= 10) {
    cout << i << endl; // print i
    i++; // increment i by 1
  }

  cout << endl;

  int j = 1;
  int sum = 0; // I'll keep adding j into sum!
  while (j <= 10) {
    sum = sum + j; 
    j++;
  }
  cout << sum << endl;

  return 0;
}
