#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream ofs; // ofs will work on writing to a file
  ofs.open("1to10.txt", ios_base::app); // alternatively we could've done just: ofstream ofs("1to10.txt");

  // now, whenever I use <<, we append to the end of the file
  for (int i = 1; i <= 10; i++) {
    ofs << i << endl;
  }

  // you should always close the file after you're done with it
  ofs.close();

  return 0;
}
