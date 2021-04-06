"use strict";

function joueurVersTexte(joueur) {
    switch (joueur) {
        case Module.Joueur.VIDE: return "vide";
        case Module.Joueur.ROUGE: return "rouge";
        case Module.Joueur.VERT: return "vert";
        case Module.Joueur.EGALITE: return "égalité";
    }
}

function joueurVersCss(joueur) {
    switch (joueur) {
        case Module.Joueur.ROUGE: return "a joueurRouge";
        case Module.Joueur.VERT: return "a joueurVert"
        default: return "a joueurVide";
    }
}

const Gui = function(jeu) {
    // initialise le jeu
    this.jeu = jeu;

    // ...

    // crée le bouton
    const dom_bouton = document.createElement('button');
    dom_bouton.innerHTML = "Recommencer";
    dom_bouton.onclick = _ => this.gererBouton();
    document.body.appendChild(dom_bouton);

    // reinitialise le jeu et l'interface
    this.razGui();
};

Gui.prototype.gererBouton = function() {
    this.razGui();
};

Gui.prototype.razGui = function() {
    // ...
};

// ...

