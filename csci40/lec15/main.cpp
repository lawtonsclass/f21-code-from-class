#include <iostream>
#include "point.h"
using namespace std;

void assertTrue(bool b, string description) {
  if (b) {
    cout << "PASSED: " << description << endl;
  } else {
    cout << "FAILED: " << description << endl;
  }
}

void test_negate();
void test_scale();

int main() {
  Point p, q;
  p.setX(1);
  p.setY(2);
  q.setX(3);
  q.setY(4);
  p.negate();  // calling the negate method on the p object
  q.negate();

  cout << "(" << p.getX() << ", " << p.getY() << ")" << endl;
  cout << "(" << q.getX() << ", " << q.getY() << ")" << endl;

  Point scaled_p = p.scale(3.5);
  Point sum = scaled_p.add(q);

  cout << "(" << scaled_p.getX() << ", " << scaled_p.getY() << ")" << endl;
  cout << "(" << sum.getX() << ", " << sum.getY() << ")" << endl;

  test_negate();
  test_scale();

  p.reset();
  cout << "(" << p.getX() << ", " << p.getY() << ")" << endl;

  return 0;
}

void test_negate() {
  Point p;
  p.setX(42);
  p.setY(43);
  p.negate();
  assertTrue(p.getX() == -42 && p.getY() == -43, "test_negate");
}

void test_scale() {
  Point p;
  p.setX(1.5);
  p.setY(2.5);
  Point scaled_p = p.scale(2.0);
  assertTrue(scaled_p.getX() == 3.0 && scaled_p.getY() == 5.0, "test_scale");
}
