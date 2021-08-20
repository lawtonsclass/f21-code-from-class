#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "Enter the day: ";
  string day;
  cin >> day;


  if (day == "Monday") {
    cout << "Mon";
  } else if (day == "Tuesday") { // otherwise, ...
    cout << "Tue";
  } else if (day == "Wednesday") { // otherwise, ...
    cout << "Wed";
  } else if (day == "Thursday") {
    cout << "Thu";
  } else { // must be "Friday"
    cout << "Fri";
  }
  
  // ONLY one body gets executed ever
  



  return 0;
}
