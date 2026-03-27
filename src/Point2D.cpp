#include "../include/Point2D.hpp"

Point2D::Point2D(double x, double y) : m_x(x), m_y(y) {}

double Point2D::getX() const { return m_x; }
double Point2D::getY() const { return m_y; }

Point2D::~Point2D() {}
