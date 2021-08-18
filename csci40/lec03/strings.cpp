#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "hello";

  cout << s.find('h') << endl;
  s.replace(1, 4, "ola"); // changes the string!
  cout << s << endl;
  
  // now s = "hola"
  cout << s.substr(2, 2) << endl;
  cout << s.size() << endl;
  string s2 = s + ", CSCI 40!";
  cout << s2 << endl;

  return 0;
}
