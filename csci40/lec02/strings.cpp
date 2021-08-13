#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "Hello"; 
  cout << s << endl;

  cout << s.at(0) << endl;
  cout << s.at(2) << endl;

  s.at(0) = 'h';
  cout << s.at(0) << endl;

  // string s2;
  // cout << "Enter a string: ";
  // cin >> s2; // always only gets one word
  // cout << s2 << endl;

  string s3;
  getline(cin, s3);
  cout << s3 << endl;

  return 0;
}
