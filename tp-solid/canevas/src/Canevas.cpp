#include "Canevas.hpp"

#include <cmath>
#include <numeric>

void Canevas::ajouterDisque(int rayon) {
    _formes.push_back(std::make_unique<Disque>(rayon));
}

void Canevas::ajouterRectangle(int largeur, int hauteur) {
    _formes.push_back(std::make_unique<Rectangle>(largeur, hauteur));
}

double Canevas::aireForme(const Forme * f) const {

    auto disque = dynamic_cast<const Disque*>(f);
    if (disque)
        return disque->_rayon * 2 * M_PI;

    auto rectangle = dynamic_cast<const Rectangle*>(f);
    if (rectangle)
        return rectangle->_largeur * rectangle->_hauteur;

    return 0;
}

double Canevas::aireTotale() const {
    double res = 0.0;
    for (const auto & f : _formes)
        res += aireForme(f.get());
    return res;
}

void Canevas::exportFormeYAML(std::ostream & os, const Forme * f) const {

    auto disque = dynamic_cast<const Disque*>(f);
    if (disque) {
        os << "- name: \"Disque\"\n";
        os << "  rayon: \"" << disque->_rayon << "\"\n";;
        return;
    }

    auto rectangle = dynamic_cast<const Rectangle*>(f);
    if (rectangle) {
        os << "- name: \"Rectangle\"\n";
        os << "  largeur: \"" << rectangle->_largeur << "\"\n";;
        os << "  hauteur: \"" << rectangle->_hauteur << "\"\n";;
        return;
    }

}

void Canevas::exportYAML(std::ostream & os, const std::string & what) const {
    if (what == "resume") {
        os << "- name: \"Canevas\"\n";
        os << "  aireTotale: \"" << aireTotale() << "\"\n";;
        return;
    }

    if (what == "descriptions") {
        for (const auto & f : _formes)
            exportFormeYAML(os, f.get());
        return;
    }
}

void Canevas::exportFormeJSON(std::ostream & os, const Forme * f) const {

    auto disque = dynamic_cast<const Disque*>(f);
    if (disque) {
        os << "  {\n";
        os << "    \"name\": \"Disque\",\n";
        os << "    \"rayon\": \"" << disque->_rayon << "\"\n";
        os << "  }";
        return;
    }

    auto rectangle = dynamic_cast<const Rectangle*>(f);
    if (rectangle) {
        os << "  {\n";
        os << "    \"name\": \"Rectangle\",\n";
        os << "    \"largeur\": \"" << rectangle->_largeur << "\",\n";
        os << "    \"hauteur\": \"" << rectangle->_hauteur << "\"\n";
        os << "  }";
        return;
    }

}

void Canevas::exportJSON(std::ostream & os, const std::string & what) const {
    if (what == "resume") {
        os << "[\n";
        os << "  {\n";
        os << "    \"name\": \"Canevas\",\n";
        os << "    \"aireTotale\": \"" << aireTotale() << "\"\n";;
        os << "  }\n";
        os << "]\n";
        return;
    }

    if (what == "descriptions") {
        os << "[\n";
        if (not _formes.empty()) {
            auto iter = _formes.begin();
            exportFormeJSON(os, iter->get());
            ++iter;
            for ( ; iter!=_formes.end(); ++iter) {
                os << ",\n";
                exportFormeJSON(os, iter->get());
            }
        }
        os << "\n]\n";
        return;
    }
}


