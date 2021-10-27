#include <iostream>
#include <string>
using namespace std;

void printCharsInOrder(string s) {
  if (s == "") {
    // base case: there are no chars to print!
    return;
  } else {
    // recursive case
    // break down the string into the first char and the rest of the
    // string
    char c = s.at(0);
    string rest = s.substr(1);

    cout << c << endl;
    printCharsInOrder(rest);
  }
}

void printCharsReverse(string s) {
  if (s == "") {
    // base case: there are no chars to print!
    return;
  } else {
    // recursive case
    // break down the string into the first char and the rest of the
    // string
    char c = s.at(0);
    string rest = s.substr(1);

    printCharsReverse(rest);
    cout << c << endl;
  }
}

int main() {
  printCharsInOrder("blah"); 
  cout << endl;
  printCharsReverse("blah"); 

  return 0;
}
