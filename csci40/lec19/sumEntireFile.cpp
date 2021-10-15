#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream ifs("1to10.txt"); // declare + open using the parameterized constructor

  int sum = 0;
  int n; // n holds the next number I read from the file
  while (ifs >> n) {
    sum += n;
  }

  // once we get here, we've tried to read past the end of the file
  cout << "ifs.eof(): " << ifs.eof() << endl;
  if (!ifs) {
    cout << "ifs is false!" << endl;
  }

  ifs.close();

  cout << sum << endl;

  return 0;
}
