#pragma once

class Point2D {
public:
  Point2D(double x, double y);
  ~Point2D();

  double getX() const;
  double getY() const;

  void setX(double x);
  void setY(double y);

  Point2D &operator*=(double value);
  Point2D &operator+=(double value);

private:
  double m_x, m_y = 0.;
};
