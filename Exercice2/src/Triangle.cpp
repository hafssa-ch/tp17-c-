
#include "Triangle.h"

Triangle::Triangle(const Point& p1, const Point& p2, const Point& p3) : a(p1), b(p2), c(p3) {}

double Triangle::perimetre() const {
    Segment s1(a,b), s2(b,c), s3(c,a);
    return s1.longueur() + s2.longueur() + s3.longueur();
}
