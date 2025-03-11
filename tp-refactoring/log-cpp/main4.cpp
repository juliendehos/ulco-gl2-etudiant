#include <fstream>
#include <iostream>

int add3(int n) {
    return n+3;
}

int mul2(int n) {
    return n*2;
}

struct Myprint {
    virtual void myprint(const std::string & str) = 0;
};

// TODO écrire une classe qui affiche à l'écran
// struct MyprintScreen

// TODO écrire une classe qui affiche à l'écran
// struct MyprintFile

// TODO passer un objet d'affichage en paramètre
int mycompute(int v0) {
    std::cout << "add3 " + std::to_string(v0) << std::endl;
    const int v1 = add3(v0);
    std::cout << "mul2 " + std::to_string(v1) << std::endl;
    const int v2 = mul2(v1);
    return v2;
}

int main() {
    std::cout << "this is main4" << std::endl;

    // TODO mettre à jour
    const int res = mycompute(18);
    std::cout << res << std::endl;

    // TODO tester mycompute vers un fichier

    return 0;
}

