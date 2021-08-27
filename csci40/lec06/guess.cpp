#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  srand(time(0)); // seed the random # gen

  int n = rand() % 100 + 1;
  int guess = -1;

  // ask the user to guess...

  while (guess != n) {
    cout << "Enter your guess: ";
    cin >> guess;
    if (guess > n) {
      cout << "Too high!\n";
    } else if (guess < n) {
      cout << "Too low!\n";
    } else {
      // got it!
      cout << "You got it!\n";
    }
  }

  return 0;
}
