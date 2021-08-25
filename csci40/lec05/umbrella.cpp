#include <iostream>
#include <string>
using namespace std;

int main() {
  string resp1, resp2; 
  cout << "Is it cloudy today? ";
  cin >> resp1;
  cout << "Is there a chance of rain? ";
  cin >> resp2;

  if (resp1 == "yes" && resp2 == "yes") {
    cout << "Bring an umbrella!\n";
  } else {
    cout << "Don't bring an umbrella.\n";
  }

  return 0;
}
