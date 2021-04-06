#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

#include <array>
#include <iostream>

enum Joueur { JOUEUR_VIDE, JOUEUR_ROUGE, JOUEUR_VERT, JOUEUR_EGALITE };

class Jeu {
    private:
        // TODO

    public:
        // Constructeur à utiliser.
        Jeu();

        // Retourne le vainqueur (ROUGE, VERT, EGALITE) ou VIDE si partie en cours.
        Joueur getVainqueur() const;

        // Retourne le joueur (ROUGE ou VERT) qui doit jouer.
        Joueur getJoueurCourant() const;

        // Joue un coup pour le joueur courant.
        // 
        // i ligne choisie (0, 1 ou 2)
        // j colonne choisie (0, 1 ou 2)
        // 
        // Si le coup est invalide, retourne false. Si le coup est valide,
        // joue le coup et retourne true.
        bool jouer(int i, int j);

        // Réinitialise le jeu.
        void raz();

        friend std::ostream & operator<<(std::ostream & os, const Jeu & jeu);
};

std::ostream & operator<<(std::ostream & os, const Jeu & jeu);

#endif

