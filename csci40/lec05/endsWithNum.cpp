#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
  string input;
  cout << "Enter a string: ";
  cin >> input;

  // get the last char
  char lastChar = input.at(input.size() - 1);
  bool wasItADigit = isdigit(lastChar);

  if (wasItADigit) {
    cout << "Ends with a #!\n";
  } else {
    cout << "Doesn't end with a #!\n";
  }

  return 0;
}
