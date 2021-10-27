#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> perms(string s) {
  if (s == "") {
    vector<string> res = {""};
    return res;
  } else {
    // recursive case
    vector<string> res;

    // pick the starting character of the scrambled string
    // (and give everybody a chance at it)
    for (int i = 0; i < s.size(); i++) {
      char startChar = s.at(i);

      string everyCharacterButIndexI = s;
      everyCharacterButIndexI.erase(i, 1);

      vector<string> remainingCharactersScrambled = perms(everyCharacterButIndexI);

      // add startChar to the start of every string in
      // remainingCharactersScrambled
      for (int j = 0; j < remainingCharactersScrambled.size(); j++) {
        remainingCharactersScrambled.at(j) = startChar + remainingCharactersScrambled.at(j);
      }

      // add all the scrambled words to res
      for (int j = 0; j < remainingCharactersScrambled.size(); j++) {
        res.push_back(remainingCharactersScrambled.at(j));
      }
    }

    return res;
  }
}

int main() {
  string s = "abc";
  vector<string> all_perms = perms(s);

  for (string s : all_perms) {
    cout << s << endl;
  }

  return 0;
}
