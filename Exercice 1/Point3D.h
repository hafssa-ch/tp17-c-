
#ifndef POINT3D_H
#define POINT3D_H

class Point3D {
private:
    double x, y, z;
public:
    Point3D(double xVal = 0, double yVal = 0, double zVal = 0);
    double getX() const;
    double getY() const;
    double getZ() const;
};

#endif
