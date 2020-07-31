#pragma once

class Forme {
    public:
        virtual ~Forme() = default;
};

class Disque : public Forme {
    public:
        double _rayon;
        Disque(double rayon);
};

class Rectangle : public Forme {
    public:
        double _largeur;
        double _hauteur;
        Rectangle(double largeur, double hauteur);
};

