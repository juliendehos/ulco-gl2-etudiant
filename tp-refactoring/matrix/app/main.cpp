#include <matrix/matrix.hpp>

#include <iostream>

int main() {
    std::cout << "this is matrix" << std::endl;

    Matrix m0(2, 3);
    m0(0, 0) = 1;
    m0(0, 1) = 2;
    m0(0, 2) = 3;
    m0(1, 0) = 4;
    m0(1, 1) = 5;
    m0(1, 2) = 6;

    Matrix m1(3, 2);
    m1(0, 0) = 1;
    m1(0, 1) = 2;
    m1(1, 0) = 3;
    m1(1, 1) = 4;
    m1(2, 0) = 5;
    m1(2, 1) = 6;

    Matrix m2 = m0.mul(m1);

    std::cout << m0 << "*" << std::endl;
    std::cout << m1 << "="  << std::endl;
    std::cout << m2 << std::endl;

    return 0;
}

