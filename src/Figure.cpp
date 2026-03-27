#include "Figure.hpp"
#include "Point2D.hpp"
#include <cmath>
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
    p *= d;
  }
}

void Figure::translater(double d) {
  for (auto &p : m_points) {
    p += d;
  }
}

void Figure::tourner(double a) {
#ifndef M_PI
  auto rad = a * std::acos(-1) / 180;
#else
  auto rad = a * M_PI / 180;
#endif

  for (auto &p : m_points) {
    auto oldX = p.getX();
    auto oldY = p.getY();

    p.setX(oldX * cos(rad) - oldY * sin(rad));
    p.setY(oldX * sin(rad) + oldY * cos(rad));
  }
}