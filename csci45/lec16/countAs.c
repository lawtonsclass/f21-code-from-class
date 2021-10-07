#include <stdio.h>

int main() {
  FILE* fp = fopen("foo.txt", "r");

  int aCount = 0;

  while (1) {
    int c = fgetc(fp);
    if (c == EOF) {
      printf("EOF on this machine is %d\n", EOF);
      printf("# of 'a's: %d\n", aCount);
      break;
    } else if (c == 'a') {
      aCount++;
    }
  }

  fclose(fp);
    
  return 0;
}
