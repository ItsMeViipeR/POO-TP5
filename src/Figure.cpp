#include "Figure.hpp"
#include "Point2D.hpp"

Figure::Figure() {}

Figure::~Figure() {}

void Figure::ajouter(Point2D &p) { m_points.push_back(p); }