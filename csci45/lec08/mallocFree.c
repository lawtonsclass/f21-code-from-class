#include <stdlib.h>
#include <stdio.h>

int main() {
  int* arr = malloc(3 * sizeof(int));
  arr[0] = 0;
  arr[1] = 1;
  arr[2] = 2;

  printf("%d\n", (arr[0] + arr[1] + arr[2]));

  free(arr);

  return 0;
}
