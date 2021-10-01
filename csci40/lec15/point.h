#ifndef POINT_H
#define POINT_H

class Point {
 public:
  // declarations of the methods
  void negate();
  Point add(const Point& o) const;
  Point scale(double c) const;
  void reset();

  // getters & setters
  double getX() const;
  double getY() const;
  void setX(double d);
  void setY(double d);

 private:
  // private things are *not* accessible outside of the class
  double x;
  double y;
};

#endif /* end of include guard: POINT_H */
