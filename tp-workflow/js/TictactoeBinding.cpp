#include "../cpp/Tictactoe.hpp"

#include <emscripten/bind.h>

EMSCRIPTEN_BINDINGS(tictactoe) {

    emscripten::enum_<Cell>("Cell")
        .value("Vide", Cell::Vide)
        .value("Rouge", Cell::Rouge)
        .value("Vert", Cell::Vert)
        ;

    emscripten::enum_<Status>("Status")
        .value("Egalite", Status::Egalite)
        .value("RougeGagne", Status::RougeGagne)
        .value("VertGagne", Status::VertGagne)
        .value("RougeJoue", Status::RougeJoue)
        .value("VertJoue", Status::VertJoue)
        ;

    emscripten::class_<Jeu>("Jeu")
        .constructor<>()
        .function("raz", &Jeu::raz)
        // TODO
        ;

}

