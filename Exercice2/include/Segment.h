
#ifndef SEGMENT_H
#define SEGMENT_H

#include "Point.h"

class Segment {
private:
    Point p1, p2;
public:
    Segment(const Point& a = Point(), const Point& b = Point());
    double longueur() const;
};

#endif
