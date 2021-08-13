#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cout << "Enter a lowercase word: ";
  cin >> s;

  // capitalize s.at(0)
  s.at(0) = 'A' + (s.at(0) - 'a'); 

  cout << s << endl;

  return 0;
}
