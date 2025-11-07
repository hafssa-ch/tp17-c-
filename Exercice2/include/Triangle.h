
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Point.h"
#include "Segment.h"

class Triangle {
private:
    Point a, b, c;
public:
    Triangle(const Point& p1 = Point(), const Point& p2 = Point(), const Point& p3 = Point());
    double perimetre() const;
};

#endif
