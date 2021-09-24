#include "count.h"
#include <cctype> // isspace function
using namespace std;

int countWords(const string& s) {
  int count = 0;

  string currentState = "outside";
  // run the state machine through every character in s
  for (int i = 0; i < s.size(); i++) {
    char currentChar = s.at(i);
    // run currentChar through the state machine

    if (currentState == "outside") {
      if (isspace(currentChar)) {
        // do nothing
      } else {
        currentState = "inside";
        count++;
      }
    } else { // inside
      if (isspace(currentChar)) {
        currentState = "outside";
      } else {
        // do nothing
      }
    }

  }

  return count;
}
