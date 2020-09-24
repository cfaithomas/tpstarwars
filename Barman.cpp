//
// Created by eric on 23/09/2020.
//

#include "Barman.h"

Barman::Barman(const string &nom): Humanoide(nom) {
    nomdubar="Chez "+nom;
    boissonfavorite="vin";
}

Barman::Barman(const string &nom, const string &nomdubar) : Humanoide(nom), nomdubar(nomdubar) {}

void Barman::parler(const string &texte) const {
    Humanoide::parler(texte+" coco");
}

void Barman::sePresenter() const {
    Humanoide::sePresenter();
    parler("le nom de mon bar est "+nomdubar);
}

void Barman::servir(const Humanoide &h) const{
h.boire(); //appel il boira forcement sa boisson favorite
}
