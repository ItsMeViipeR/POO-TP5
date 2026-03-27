#pragma once

#include "Point2D.hpp"
#include <vector>
class Figure {
public:
  Figure();
  ~Figure();

  void ajouter(Point2D &p);

  void rotate();

  void affiche() const;

  void dilater(double d);

  void translater(double d);

private:
  std::vector<Point2D> m_points;
};
