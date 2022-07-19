#include <cassert>

int fiboNaive(int n) {
    assert(n => 0);
    return n < 2 ? n : fiboNaive(n-1) + fiboNaive(n-2);
}

// TODO implement fiboIterative


#include <pybind11/pybind11.h>

PYBIND11_MODULE(myfibo, m) {

    // TODO export fiboNaive (as fibo_naive)

    // TODO export fiboIterative (as fibo_iterative)

}

