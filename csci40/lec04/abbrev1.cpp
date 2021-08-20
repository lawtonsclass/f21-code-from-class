#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "Enter the day: ";
  string day;
  cin >> day;

  if (day == "Monday") {
    cout << "Mon";
  } else {
    if (day == "Tuesday") {
      cout << "Tue";
    } else {
      if (day == "Wednesday") {
        cout << "Wed";
      } else {
        if (day == "Thursday") {
          cout << "Thu";
        } else { // must be "Friday"
          cout << "Fri";
        }
      }
    }
  }


  return 0;
}
