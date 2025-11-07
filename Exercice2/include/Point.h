
#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x, y;
public:
    Point(double xVal = 0, double yVal = 0);
    double getX() const;
    double getY() const;
};

#endif
