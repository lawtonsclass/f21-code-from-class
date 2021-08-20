#include <iostream>
#include <string>
using namespace std;

int main() {
  string currentDay;
  cout << "What day is it today? ";
  cin >> currentDay;

  if (currentDay == "Wednesday") {
    cout << "Wear pink!\n";
  } else {
    cout << "Don't wear pink!\n";
  }

  // no matter what side we go down, we always come back here and
  // execute the rest of the program
  cout << "done\n";

  return 0;
}
