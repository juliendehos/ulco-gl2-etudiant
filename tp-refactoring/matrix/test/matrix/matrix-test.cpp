#include <matrix/matrix.hpp>

#include <catch2/catch.hpp>

TEST_CASE( "matrix constructor 1" ) {
    Matrix m(2, 3);
    REQUIRE( m(0, 0) == 0.0 );
    REQUIRE( m(0, 1) == 0.0 );
    REQUIRE( m(0, 2) == 0.0 );
    REQUIRE( m(1, 0) == 0.0 );
    REQUIRE( m(1, 1) == 0.0 );
    REQUIRE( m(1, 2) == 0.0 );
}

TEST_CASE( "matrix get/set 1" ) {
    Matrix m(2, 3);
    try {
        m(0, 42) = 1;
        REQUIRE(false);
    }
    catch (const MatrixError & e) {
        REQUIRE(e == MatrixError::BadIndex);
    }
    catch (...) {
        REQUIRE(false);
    }
}

TEST_CASE( "matrix get/set 2" ) {
    Matrix m(2, 3);
    m(0, 2) = 1;
    m(1, 0) = 2;
    REQUIRE( m(0, 2) == 1 );
    REQUIRE( m(1, 0) == 2 );
}

TEST_CASE( "matrix add 1" ) {
    Matrix m0(2, 3);
    Matrix m1(3, 2);
    try {
        Matrix m2 = m0.add(m1);
        REQUIRE(false);
    }
    catch (const MatrixError & e) {
        REQUIRE(e == MatrixError::IncompatibleSizes);
    }
    catch (...) {
        REQUIRE(false);
    }
}

TEST_CASE( "matrix add 2" ) {
    Matrix m0(2, 3);
    m0(0, 0) = 1;
    m0(0, 1) = 2;
    m0(0, 2) = 3;
    m0(1, 0) = 4;
    m0(1, 1) = 5;
    m0(1, 2) = 6;

    Matrix m1(2, 3);
    m1(0, 0) = 41;
    m1(0, 1) = 40;
    m1(0, 2) = 39;
    m1(1, 0) = 38;
    m1(1, 1) = 37;
    m1(1, 2) = 36;

    Matrix m2 = m0.add(m1);
    REQUIRE( m2(0, 0) == 42 );
    REQUIRE( m2(0, 1) == 42 );
    REQUIRE( m2(0, 2) == 42 );
    REQUIRE( m2(1, 0) == 42 );
    REQUIRE( m2(1, 1) == 42 );
    REQUIRE( m2(1, 2) == 42 );
}


TEST_CASE( "matrix mul 1" ) {
    Matrix m0(2, 3);
    Matrix m1(2, 3);
    try {
        Matrix m2 = m0.mul(m1);
        REQUIRE(false);
    }
    catch (const MatrixError & e) {
        REQUIRE(e == MatrixError::IncompatibleSizes);
    }
    catch (...) {
        REQUIRE(false);
    }
}

TEST_CASE( "matrix mul 2" ) {
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
    REQUIRE( m2(0, 0) == 22 );
    REQUIRE( m2(0, 1) == 28 );
    REQUIRE( m2(1, 0) == 49 );
    REQUIRE( m2(1, 1) == 64 );
}

