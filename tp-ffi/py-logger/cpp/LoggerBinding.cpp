#include "Logger.hpp"

#include <pybind11/pybind11.h>

PYBIND11_MODULE(Logger, m) {

    pybind11::enum_<Level>(m, "Level")
        .value("Info", Level::Info)
        .value("Warning", Level::Warning)
        .value("Error", Level::Error)
        ;
        
    // TODO bind Logger class

}

