#include "Tictactoe.hpp"

Jeu::Jeu() {
    raz();
}

Status Jeu::getStatus() const {
    // TODO
    return Status::RougeJoue;
}

Cell Jeu::getCell(int i, int j) const {
    // TODO
    return Cell::Vide;
}

std::ostream & operator<<(std::ostream & os, const Jeu & jeu) {
    // TODO
    return os;
}

bool Jeu::jouer(int i, int j) {
    // TODO
    return false;
}

void Jeu::raz() {
    // TODO
}

