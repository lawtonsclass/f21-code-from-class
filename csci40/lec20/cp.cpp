#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {
  // original filename is in argv[1], 
  // filename to copy into is in argv[2]
  string fileToCopy = argv[1];
  string fileToPaste = argv[2];

  ifstream ifs(fileToCopy);
  ofstream ofs(fileToPaste);

  // keep reading one character from ifs, and writing that char to ofs
  while (true) {
    char nextChar = ifs.get();
    // only continue if that read was successful
    if (ifs.eof()) {
      break;
    }

    // write nextChar to ofs
    ofs.put(nextChar);
  } 

  ifs.close();
  ofs.close();

  return 0;
}
