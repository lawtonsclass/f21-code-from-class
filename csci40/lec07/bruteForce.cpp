#include <iostream>
using namespace std;

int main() {
  for (int numHorses = 0; numHorses <= 100; numHorses++) {
    for (int numPigs = 0; numPigs <= 100; numPigs++) {
      for (int numRabbits = 0; numRabbits <= 100; numRabbits++) {
        // when we're here, we have specific values for horses, pigs,
        // & rabbits
        // every possibility will be tried

        if (numHorses + numPigs + numRabbits == 100 &&
            numHorses*10 + numPigs*3 + numRabbits*0.50 == 100) {
          // we found a solution!
          cout << "horses: " << numHorses << endl;
          cout << "pigs: " << numPigs << endl;
          cout << "rabbits: " << numRabbits << endl;
          cout << endl;
        }
      }
    }
  }
        


  return 0;
}
