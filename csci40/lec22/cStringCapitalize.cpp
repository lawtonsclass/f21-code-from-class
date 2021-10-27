#include <iostream>
#include <cctype>
using namespace std;

void capitalize(char* s) {
  if (s[0] == '\0') {
    // base case: empty string--nothing to capitalize
    return;
  } else {
    // recursive case
    // capitalize the first char
    s[0] = toupper(s[0]);
    // recursively capitalize the rest of the string
    capitalize(s+1);
  }
}

int main() {
  char s[] = "blah"; 
  capitalize(s);
  cout << s << endl;

  return 0;
}
