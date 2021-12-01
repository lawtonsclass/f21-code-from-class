#include <iostream>
#include <ctime>
using namespace std;

class Stopwatch {
  public:
    void start();
    double getTimeElapsed() const;

  private:
    clock_t startTime;
};

void Stopwatch::start() {
  startTime = clock();
}

double Stopwatch::getTimeElapsed() const {
  clock_t difference = clock() - startTime;
  return static_cast<double>(difference) / CLOCKS_PER_SEC;
}

int main() {
  Stopwatch s;
  s.start();

  while (true) {
    cout << "\r" << s.getTimeElapsed();
  }

  return 0;
}
