#include <iostream>
#include <list>
#include <vector>
#include <string>
using namespace std;

struct Pair {
  string key;
  int val;
};

// a horrible hash function!
int hashString(const string& s) {
  return 0;
}

void insertIntoHashTable(vector<list<Pair>>& v, const string& key, int val) {
  // hash the key to get an index
  int idx = hashString(key) % v.size();

  // go to that index and see if the key is already there
  list<Pair>& l = v.at(idx); // the list I want to go through/modify
  for (Pair& p : l) {
    // see if the key was there
    if (p.key == key) {
      // modify the corresponding value
      p.val = val;
      // we're done
      return;
    }
  }

  // if we got here, that means the key was not yet in the list!
  Pair newPair = {key, val}; 
  l.push_back(newPair);
}

int lookupInHashTable(vector<list<Pair>>& v, const string& key) {
  // hash the key to get an index
  int idx = hashString(key) % v.size();

  // go to that index and see if the key is already there
  list<Pair>& l = v.at(idx); // the list I want to go through/modify
  for (Pair& p : l) {
    // see if the key was there
    if (p.key == key) {
      // give back the corresponding val!
      return p.val;
    }
  }
  
  // if we got here, the key was not in the hash table!
  // return some value / throw an exception to indicate that we didn't
  // find the key
  return -1;
}

int main() {
  vector<list<Pair>> hashTable;
  hashTable.resize(5);
  // hashTable is of size 5

  insertIntoHashTable(hashTable, "Lawton", 8675309);
  insertIntoHashTable(hashTable, "Lonzo", 8675310);
  insertIntoHashTable(hashTable, "Mom", 8675311);
  insertIntoHashTable(hashTable, "Lawton", 8675308);

  cout << lookupInHashTable(hashTable, "Lawton") << endl;
  cout << lookupInHashTable(hashTable, "Lonzo") << endl;
  cout << lookupInHashTable(hashTable, "Mom") << endl;
  cout << lookupInHashTable(hashTable, "Dad") << endl;

  return 0;
}
