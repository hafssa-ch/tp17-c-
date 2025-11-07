
#include "Segment.h"
#include <cmath>

Segment::Segment(const Point& a, const Point& b) : p1(a), p2(b) {}

double Segment::longueur() const {
    double dx = p2.getX() - p1.getX();
    double dy = p2.getY() - p1.getY();
    return std::sqrt(dx*dx + dy*dy);
}
