#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream ifs("1to10.txt"); // declare + open using the parameterized constructor

  int sum = 0;
  for (int i = 0; i < 5; i++) {
    int n;
    ifs >> n;
    sum += n;
  }

  ifs.close();

  cout << sum << endl;

  return 0;
}
