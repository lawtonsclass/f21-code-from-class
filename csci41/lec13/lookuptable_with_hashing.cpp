#include <iostream>
#include <vector>
using namespace std;

void insert(vector<string>& v, int key, string val) {
  // shrink the key down to an index that's part of v
  // modulus (%) is a great way to do this!
  int index = key % v.size(); // % v.size() always gives a # between 0 and v.size() - 1
  v.at(index) = val; // (we'll solve the issue of clashing elements later)
}

string lookup(vector<string>& v, int key) {
  int index = key % v.size();
  return v.at(index);
}

int main() {
  // so much wasted memory!!! :(
  vector<string> Phonebook(10);

  // insert is O(1)

  insert(Phonebook, 8675309, "Lawton");
  insert(Phonebook, 8675310, "Lonzo");

  // retrieve is O(1)
  cout << lookup(Phonebook, 8675309) << endl;
  cout << lookup(Phonebook, 8675310) << endl;

  return 0;
}
