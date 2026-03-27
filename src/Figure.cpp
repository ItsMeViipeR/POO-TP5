#include "Figure.hpp"
#include "Point2D.hpp"

Figure::Figure() {}

Figure::~Figure() {}

void Figure::ajouter(Point2D &p) { m_points.push_back(p); }

void Figure::rotate() {
  for (auto &p : m_points) {
    auto oldX = p.getX();
    auto oldY = p.getY();

    p.setX(oldY);
    p.setY(-oldX);
  }
}