#include <iostream>
using namespace std;

int divide(int dividend, int divisor) {
  return dividend / divisor;
}

int main() {
  cout << divide(42, 5) << endl; 
  cout << divide(64, 2) << endl; 
  cout << divide(64, 0) << endl; 
  // should we stop ourselves from ever calling divide when divisor == 0?
  // should divide itself print to the user that something went wrong?
  //  but what should it return back??
  //    should we be looking out for that thing that it returns
  //    back?!?

  return 0;
}
