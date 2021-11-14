#include <matrix/matrix.hpp>

Matrix::Matrix(int ni, int nj) :
_ni(ni), _nj(nj), _data(ni, std::vector<double>(nj, 0.0)) {
}

double Matrix::operator()(int i, int j) const {
    if (i<0 or i>=_ni or j<0 or j>=_nj)
        throw MatrixError::BadIndex;
    return _data[i][j];
}

double & Matrix::operator()(int i, int j) {
    if (i<0 or i>=_ni or j<0 or j>=_nj)
        throw MatrixError::BadIndex;
    return _data[i][j];
}

std::ostream & operator<<(std::ostream & os, const Matrix & m) {
    for (const auto & row : m._data) {
        for (double c : row) {
            os << c << ' ';
        }
        os << std::endl;
    }
    return os;
}


Matrix Matrix::add(const Matrix & m) const {
    if (m._ni != _ni or m._nj != _nj)
        throw MatrixError::IncompatibleSizes;
    Matrix r(_ni, _nj);
    for (int i=0; i<_ni; ++i)
        for (int j=0; j<_nj; ++j)
            r._data[i][j] = _data[i][j] + m._data[i][j];
    return r;
}

Matrix Matrix::mul(const Matrix & m) const {
    if (m._ni != _nj)
        throw MatrixError::IncompatibleSizes;
    Matrix r(_ni, m._nj);
    for (int i=0; i<r._ni; ++i)
        for (int j=0; j<r._nj; ++j)
            for (int k=0; k<_nj; ++k)
                r(i, j) += operator()(i, k) * m(k, j);
    return r;
}

