
#include <iostream>
#include "Triangle.h"
#include "Point.h"
using namespace std;

int main() {
    Point A(0,0), B(3,0), C(0,4);
    Triangle T(A,B,C);
    cout << "Périmètre du triangle : " << T.perimetre() << endl;
    return 0;
}
