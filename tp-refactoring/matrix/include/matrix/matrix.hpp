#pragma once

#include <iostream>
#include <vector>

enum class MatrixError { BadIndex, IncompatibleSizes };

class Matrix {
    private:
        int _ni;
        int _nj;
        std::vector<std::vector<double>> _data;

    public:
        Matrix(int ni, int nj);
        
        double operator()(int i, int j) const;
        double & operator()(int i, int j);

        Matrix add(const Matrix & m) const;
        Matrix mul(const Matrix & m) const;

        friend std::ostream & operator<<(std::ostream &, const Matrix &);

};

std::ostream & operator<<(std::ostream &, const Matrix &);

