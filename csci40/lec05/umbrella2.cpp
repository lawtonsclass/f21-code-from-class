#include <iostream>
#include <string>
using namespace std;

int main() {
  string resp1, resp2; 
  cout << "Is there a chance of rain? ";
  cin >> resp1;
  cout << "Is it currently raining? ";
  cin >> resp2;

  // use || (or) to see if either side was true
  if (resp1 == "yes" || resp2 == "yes") {
    cout << "Bring an umbrella!\n";
  } else {
    cout << "Don't bring an umbrella.\n";
  }

  return 0;
}
