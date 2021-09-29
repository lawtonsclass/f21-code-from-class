#include <iostream>
using namespace std;

class Point {
 public:
  double x;
  double y;

  void negate() {
    // whenever the negate method is called, it looks something like
    // z.negate();
    // So, we always have a Point object that we're working with!
    // Using x & y inside of this method get us the x & y fields of
    // the object we're being called on.
    x = -x;
    y = -y;
  } 

  Point add(const Point& o) {
    Point res;
    // res's x & y depend on our current object's x & y, and also o's
    // x & y
    res.x = x + o.x;
    res.y = y + o.y;

    return res;
  }

  Point scale(double c) {
    Point res;

    res.x = x * c;
    res.y = y * c;

    return res;
  }
};

int main() {
  Point p, q;
  p.x = 1;
  p.y = 2;
  q.x = 3;
  q.y = 4;
  p.negate(); // calling the negate method on the p object
  q.negate();

  cout << "(" << p.x << ", " << p.y << ")" << endl;
  cout << "(" << q.x << ", " << q.y << ")" << endl;

  Point scaled_p = p.scale(3.5);
  Point sum = scaled_p.add(q);

  cout << "(" << scaled_p.x << ", " << scaled_p.y << ")" << endl;
  cout << "(" << sum.x << ", " << sum.y << ")" << endl;

  return 0;
}
