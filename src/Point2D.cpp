#include "../include/Point2D.hpp"

Point2D::Point2D(double x, double y) : m_x(x), m_y(y) {}

double Point2D::getX() const { return m_x; }
double Point2D::getY() const { return m_y; }

void Point2D::setX(double x) { m_x = x; }

void Point2D::setY(double y) { m_y = y; }

Point2D::~Point2D() {}
