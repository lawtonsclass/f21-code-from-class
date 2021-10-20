#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  ifstream ifs;
  ifs.open("SwedishWords.txt");

  vector<string> swedishWords;
  string nextWord;
  while (ifs >> nextWord) {
    swedishWords.push_back(nextWord);
  }
  ifs.close();

  // pick 2 random indices into the vector
  srand(time(0));
  int index1 = rand() % swedishWords.size();
  int index2 = rand() % swedishWords.size();

  cout << "This season's hot new Ikea product is called: " 
       << swedishWords.at(index1) << swedishWords.at(index2) << endl;

  return 0;
}
