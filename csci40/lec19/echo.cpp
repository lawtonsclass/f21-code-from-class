#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ofstream ofs; // ofs will work on writing to a file
  ofs.open("echo_output.txt", ios_base::app); // alternatively we could've done just: ofstream ofs("1to10.txt");

  while (true) {
    cout << "Enter a line (or type q to quit): ";
    string line;
    getline(cin, line);

    if (line == "q") {
      break;
    } else {
      ofs << line << endl;
    }
  }


  // you should always close the file after you're done with it
  ofs.close();

  return 0;
}
