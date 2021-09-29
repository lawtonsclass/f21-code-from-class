#include <iostream>
using namespace std;

// this defines the Point type
struct Point {
  // every Point has an x & y member variable
  double x;
  double y;
};

Point add(const Point& p, const Point& q) {
  Point res;

  res.x = p.x + q.x;
  res.y = p.y + q.y;

  return res;
}

void negatePoint(Point& r) {
  r.x = -r.x;
  r.y = -r.y;
}

int main() {
  Point p; // decl only
  p.x = 42;
  p.y = 42.5;

  Point q = {2, 3}; // decl + init

  cout << "(" << p.x << ", " << p.y << ")" << endl;
  cout << "(" << q.x << ", " << q.y << ")" << endl;

  Point sum = add(p, q);
  cout << "(" << sum.x << ", " << sum.y << ")" << endl;

  negatePoint(p);
  cout << "(" << p.x << ", " << p.y << ")" << endl;

  return 0;
}
