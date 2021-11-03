#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

int main() {
  vector<int> v = {1, 2, 3}; 

  try {
    // put all your potential exception-throwing code inside a try
    // block!
    cout << v.at(3) << endl;
    cout << "extra code here that won't get run" << endl;
  } catch (out_of_range& e) {
    // Hey, C++! I know how to handle an out_of_range exception!
    cout << "Uh oh!\n";
    cout << "(Handle the error)\n";
    cout << "Exception's data: " << e.what() << endl;
  }

  cout << "Rest of code...\n";

  return 0;
}
