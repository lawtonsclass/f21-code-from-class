#include <stdio.h> // in C++, it's <cstdio>

int main(int argc, char* argv[]) {
  // argc is the "argument count"--# of args (including the name of
  // the program)
  // argv is the "argument vector"--it's an array of C-strings

  printf("argc: %d\n", argc);
  for (int i = 0; i < argc; i++) {
    printf(argv[i]);
    printf("\n");
  }

  return 0;
}
