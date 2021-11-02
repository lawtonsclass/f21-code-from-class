#include <iostream>
#include <signal.h>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
using namespace std;

void sigint_handler(int sid) {
  cout << "Haha, I'm not going to let you end me!\n";
}

int main() {
  // let's handle SIGINT (Ctrl-C)
  signal(SIGINT, sigint_handler);

  unsigned int i = 0;
  while (true) {
    cout << i << endl;
    i++;
    std::this_thread::sleep_for (std::chrono::seconds(1));
  }

  return 0;
}
