#include "../cpp/Tictactoe.hpp"

#include <emscripten/bind.h>

EMSCRIPTEN_BINDINGS(tictactoe) {

    emscripten::enum_<Joueur>("Joueur")
        .value("VIDE", JOUEUR_VIDE)
        .value("ROUGE", JOUEUR_ROUGE)
        .value("VERT", JOUEUR_VERT)
        .value("EGALITE", JOUEUR_EGALITE)
        ;

    emscripten::class_<Jeu>("Jeu")
        .constructor<>()
        .function("raz", &Jeu::raz)
        // TODO
        ;

}

