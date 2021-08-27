#include <iostream>
#include <string> // for the string type
#include <cctype> // for tolower
using namespace std;

int main() {
  cout << "Enter a word: ";
  string s;
  cin >> s;

  // I want to visit every index of the string s
  // i = 0 ... (s.size() - 1)
  int i = 0;
  while (i < s.size()) {
    // lowercase s.at(i)
    s.at(i) = tolower(s.at(i));
    // advance i
    i++;
  }

  // equivalent to the above
  // for (int i = 0; i < s.size(); i++) {
    // s.at(i) = tolower(s.at(i));
  // }

  cout << s << endl;

  return 0;
}
