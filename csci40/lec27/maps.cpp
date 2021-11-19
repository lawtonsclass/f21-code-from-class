#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
  map<string, int> phonebook;
  phonebook.emplace("Lawton", 5551234);
  phonebook.emplace("Lonzo", 5551234);

  cout << phonebook.count("Lawton") << endl;
  cout << phonebook.at("Lawton") << endl;

  return 0;
}
