#pragma once

#include "Point2D.hpp"
#include <vector>
class Figure {
public:
  Figure();
  ~Figure();

  void ajouter(Point2D &p);

  void rotate();

private:
  std::vector<Point2D> m_points;
};
