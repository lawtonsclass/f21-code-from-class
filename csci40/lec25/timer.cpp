#include <iostream>
#include <ctime>
using namespace std;

int main() {
  clock_t start = clock(); 

  int sum = 0;
  for (int i = 1; i <= 100'000'000; i++) {
    sum += i;
  }

  clock_t end = clock(); 

  double time_elapsed = static_cast<double>(end - start) / CLOCKS_PER_SEC;
  cout << time_elapsed << " seconds\n";

  return 0;
}
