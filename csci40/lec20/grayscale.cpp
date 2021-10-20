#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int main() {
  ifstream ifs;
  ifs.open("cat.ppm");
  ofstream ofs;
  ofs.open("cat_gray.ppm");

  // copy over the first 3 lines of the file as-is
  string line;
  getline(ifs, line);
  ofs << line << endl;
  getline(ifs, line);
  ofs << line << endl;
  getline(ifs, line);
  ofs << line << endl;

  while (true) {
    // attempt to read the next pixel value
    int r, g, b;
    ifs >> r >> g >> b;

    // make sure we just successfully read the values
    if (ifs.eof()) {
      // don't use what we just read--we're done!
      break;
    }

    int avg = round((r + g + b) / 3.0);

    // write "avg avg avg\n" to ofs
    ofs << avg << " " << avg << " " << avg << endl;
  }

  ifs.close();
  ofs.close();

  return 0;
}
