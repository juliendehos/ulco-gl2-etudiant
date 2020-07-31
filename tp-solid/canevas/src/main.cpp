
#include "Canevas.hpp"

#include <iostream>

int main() {

    Canevas c;
    c.ajouterDisque(2);
    c.ajouterRectangle(3, 4);

    std::cout << "\n**** descriptions ****" << std::endl;
    c.exportJSON(std::cout, "descriptions");
    c.exportYAML(std::cout, "descriptions");

    std::cout << "\n**** resume ****" << std::endl;
    c.exportJSON(std::cout, "resume");
    c.exportYAML(std::cout, "resume");

    return 0;
}

