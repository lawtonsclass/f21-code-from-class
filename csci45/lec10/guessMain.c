#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumberFrom1To(int n) {
  return (rand() % n) + 1;
}

extern void guessTheNumberGame(int up_to);

/*
void guessTheNumberGame(int up_to) {
  // get a random number between 1 and up_to
  int n = getRandomNumberFrom1To(up_to);

  int guess = -1;
  while (guess != n) {
    printf("Enter your guess: ");
    scanf("%d", &guess);

    if (guess < n) {
      printf("Too low\n");
    } else if (guess > n) {
      printf("Too high\n");
    } else {
      printf("You got it!\n");
    }
  }
}
*/

int main() {
  srand(time(0));

  guessTheNumberGame(100);

  return 0;
}
