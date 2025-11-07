
#include "Point3D.h"

Point3D::Point3D(double xVal, double yVal, double zVal) : x(xVal), y(yVal), z(zVal) {}

double Point3D::getX() const { return x; }
double Point3D::getY() const { return y; }
double Point3D::getZ() const { return z; }
