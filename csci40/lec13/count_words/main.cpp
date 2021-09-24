#include <iostream>
#include "count.h"
using namespace std;

void assertTrue(bool b, string description) {
  if (b) {
    cout << "PASSED: " << description << endl;
  } else {
    cout << "FAILED: " << description << endl;
  }
}

void test() {
  string s = " There are 7 words in     \t \n\n\t\t   this\t string!\n";
  assertTrue(countWords(s) == 7, "7-word string");
}

int main() {
  cout << "Enter a line: "; 
  string line;
  getline(cin, line);

  cout << "# of words: " << countWords(line) << endl;

  test();

  return 0;
}
