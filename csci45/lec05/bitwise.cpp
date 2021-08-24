#include <iostream>
using namespace std;

int main() {
  int x = 0b00010101;
  cout << x << endl;

  // extract bit 2 (4 -- 0000100), set bit 5 (32 -- 000100000)
  if ((x & 4) != 0) {
    cout << "bit 2 is set!\n";
  } 
  
  x = x | 32;
  cout << x << endl;

  // negate
  x = (~x) + 1;
  cout << x << endl;

  
  // let's extract bits 2-5 from x
  // x & 0b00000111100
  cout << (x & (0b1111 << 2)) << endl;


  return 0;
}
