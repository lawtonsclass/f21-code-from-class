#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
  string input;
  cout << "Enter a string: ";
  cin >> input;

  // convert input to a proper noun
  input.at(0) = toupper(input.at(0));

  cout << input << endl;

  return 0;
}
