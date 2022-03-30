"use strict";

function statusVersTexte(st) {
    switch (st) {
        case Module.Status.Egalite: return "égalité";
        case Module.Status.RougeGagne: return "rouge gagne";
        case Module.Status.VertGagne: return "vert gagne";
        case Module.Status.RougeJoue: return "rouge joue";
        case Module.Status.VertJoue: return "vert joue";
    }
}

function cellVersCss(cell) {
    switch (cell) {
        case Module.Cell.Rouge: return "a cellRouge";
        case Module.Cell.Vert: return "a cellVert"
        case Module.Cell.Vide: return "a cellVide";
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

