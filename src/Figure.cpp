#include "Figure.hpp"
#include "Point2D.hpp"
#include <iostream>

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

void Figure::affiche() const {
  std::cout << "[";

  for (size_t i = 0; i < m_points.size(); ++i) {
    if (i > 0)
      std::cout << ", ";
    std::cout << "Point2D(" << m_points[i].getX() << ", " << m_points[i].getY()
              << ")";
  }

  std::cout << "]" << std::endl;
}

void Figure::dilater(double d) {
  for (auto &p : m_points) {
    p.setX(p.getX() * d);
    p.setY(p.getY() * d);
  }
}