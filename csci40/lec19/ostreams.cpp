#include <iostream>
#include <fstream>
using namespace std;

void write1to10(ostream& os);

int main() {
  ofstream ofs; // ofs will work on writing to a file
  ofs.open("1to10.txt", ios_base::app); // alternatively we could've done just: ofstream ofs("1to10.txt");

  write1to10(ofs);
  write1to10(cout);

  // you should always close the file after you're done with it
  ofs.close();

  return 0;
}

void write1to10(ostream& os) {
  for (int i = 1; i <= 10; i++) {
    os << i << endl;
  }
}
