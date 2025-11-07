
#include <iostream>
#include "Matrix.h"

int main() {
    Matrix<int, 2, 2> A;
    Matrix<int, 2, 2> B;

    
    A.at(0,0) = 1; A.at(0,1) = 2;
    A.at(1,0) = 3; A.at(1,1) = 4;

    B.at(0,0) = 5; B.at(0,1) = 6;
    B.at(1,0) = 7; B.at(1,1) = 8;

    std::cout << "Matrice A:\n" << A;
    std::cout << "Matrice B:\n" << B;

    auto C = A + B;
    std::cout << "A + B =\n" << C;

    auto D = A * B;
    std::cout << "A * B =\n" << D;

    
    Matrix<double, 3, 3> M1, M2;
    for (size_t i = 0; i < 3; ++i)
        for (size_t j = 0; j < 3; ++j) {
            M1.at(i, j) = i + j + 1.0;
            M2.at(i, j) = (i == j) ? 1.0 : 0.0; // matrice identité
        }

    std::cout << "\nM1:\n" << M1;
    std::cout << "M2:\n" << M2;
    std::cout << "M1 * M2 =\n" << (M1 * M2);

    return 0;
}
