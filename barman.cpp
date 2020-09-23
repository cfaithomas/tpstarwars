//
// Created by eric on 23/09/2020.
//

#include "barman.h"

barman::barman(const string &nom):Humanoide(nom) {
    nomdubar="Chez "+nom;
    boissonfavorite="vin";
}

barman::barman(const string &nom, const string &nomdubar) : Humanoide(nom), nomdubar(nomdubar) {}

void barman::parler(const string &texte) const {
    Humanoide::parler(texte+" coco");
}

void barman::sePresenter() const {
    Humanoide::sePresenter();
    parler("le nom de mon bar est "+nomdubar);
}

void barman::servir(const Humanoide &h) {
h.boire(); //appel il boira forcement sa boisson favorite
}
