#include "point.h"

void Point::negate() {
  // whenever the negate method is called, it looks something like
  // z.negate();
  // So, we always have a Point object that we're working with!
  // Using x & y inside of this method get us the x & y fields of
  // the object we're being called on.
  x = -x;
  y = -y;
}

Point Point::add(const Point& o) const {
  Point res;
  // res's x & y depend on our current object's x & y, and also o's
  // x & y
  res.x = x + o.x;
  res.y = y + o.y;

  return res;
}

Point Point::scale(double c) const {
  Point res;

  res.x = x * c;
  res.y = y * c;

  return res;
}

double Point::getX() const {
  // x = 555; // we don't want to allow this!
  return x;
}

double Point::getY() const {
  return y;
}

void Point::setX(double d) {
  x = d;
}

void Point::setY(double d) {
  y = d;
}

void Point::reset() {
  // double x = 0.0;
  // double y = 0.0;
  // ^ makes local variables that shadow our fields!!!!!!!!!
  x = 0.0;
  y = 0.0;
}
