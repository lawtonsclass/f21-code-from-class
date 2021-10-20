#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream ifs;
  ifs.open("sample.txt");

  string s;

  ifs >> s;
  cout << s << endl;
  ifs >> s;
  cout << s << endl;
  ifs >> s;
  cout << s << endl;
  ifs >> s;
  cout << s << endl;

  cout << "ifs.eof(): " << ifs.eof() << endl;

  // uh oh...
  ifs >> s; // this line fails silently and does nothing
  // s doesn't change from what it was before
  // You should always check after a read to see if it worked
  // (That's why the best way to read is in a loop condition)
  cout << s << endl;
  cout << "ifs.eof(): " << ifs.eof() << endl;

  ifs.close();

  return 0;
}
