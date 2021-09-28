#include <iostream>
#include <unistd.h> // for fork
#include <sys/wait.h> // for wait
using namespace std;

int main() {
  const int size = 10'000'000;
  int* arr = new int[size];
  int sum = 0;


  if (fork() == 0) {
    // I'm the child!
    cout << "Hello from the child!\n"; 
    for (int i = 0; i < size/2; i++)
      sum += arr[i];
  } else {
    // I'm the parent
    cout << "Hello from the parent!\n"; 
    for (int i = size/2; i < size; i++)
      sum += arr[i];

    // parent can wait for the child
    wait(nullptr);
  }

  return 0;
}
