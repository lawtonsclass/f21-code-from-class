#include <iostream>
using namespace std;

class C {
  public:
    int getX();
    void setX(int newX);

  private:
    int x;
};

int C::getX() {
  return x;
}

void C::setX(int newX) {
  x = newX;
}

int main() {
  C c;
  c.setX(42); // ?!?
  cout << c.getX() << endl;

  return 0;
}
