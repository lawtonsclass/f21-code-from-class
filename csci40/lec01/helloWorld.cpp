// compile with: g++ -std=c++17 helloWorld.cpp

// this is called a single-line "comment"--it's not code, it's just
// for us as programmers
/*
 this is
 a multi-line
 comment! */
#include <iostream> // this gives us std::cout and std::endl
using namespace std; // allows use to skip the "std::"s

// this is called the main function--it's where the program starts!
int main() {
  // std::cout is the terminal screen
  // things between ""s are called *strings*
  cout << "Hello, world!" << endl; // the '\n' character creates a "newline"

  return 0; // marks the end of the program; tells the terminal that it finished correctly
}
