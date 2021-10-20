#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

string translate(const string& word) {
  if (word == "snow") {
    return "nieve";
  } else if (word == "mountain") {
    return "montagne";
  } else if (word == "footprint") {
    return "脚印";
  } else if (word == "kingdom") {
    return "王国";
  } else {
    return word;
  }
}

int main() {
  ifstream ifs("LetItGoLyrics.txt");

  while (true) {
    // repeatedly read a word, translate it, and output it back
    string word;
    ifs >> word;
    
    // *always* ensure that we successfully just read a word
    if (ifs.eof()) {
      break;
    }

    cout << translate(word);

    // retain the original whitespace
    // repeatedly peek and if it's whitespace, get it and print it out
    while (isspace(ifs.peek())) {
      char nextChar = ifs.get();
      cout << nextChar;
    }
  }


  ifs.close();
  return 0;
}
