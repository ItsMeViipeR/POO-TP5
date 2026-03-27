#pragma once

class Point2D {
public:
  Point2D(double x, double y);
  ~Point2D();

  double getX() const;
  double getY() const;

private:
  double m_x, m_y = 0.;
};
