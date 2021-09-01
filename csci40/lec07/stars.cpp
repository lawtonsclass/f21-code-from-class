#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void pause(double seconds) {
  std::this_thread::sleep_for(std::chrono::duration<double>(seconds));
}

int main() {
  for (int i = 0; i < 10; i++) {
    cout << "*" << endl;
    pause(0.5);
  }

  return 0;
}
