#include <iostream>
using namespace std;

// harryPotter is a global variable--it exists everywhere and lives
// for the entire life of the program
int harryPotter = 42;

void gobletOfFire() {
  // cedric is a local variable--he only lives for the life of the
  // function. As soon as the function returns, he ceases to exist.
  int cedric = 45;

  cout << harryPotter << endl;
  harryPotter++;
  cedric++;
  cout << cedric << endl;
}

int main() {
  gobletOfFire(); 
  gobletOfFire(); 

  cout << harryPotter << endl;
  // cout << cedric << endl; // cedric doesn't exist here

  return 0;
}
