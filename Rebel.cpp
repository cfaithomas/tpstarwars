//
// Created by eric on 21/09/2020.
//

#include <iostream>
#include "Rebel.h"

void Rebel::tirer(const MembreEmpire &me) const {
    cout<<"Beau coup de sabre laser"<<endl;
    parler("Que la force soit avec moi");
}

void Rebel::liberer(Princesse &p)  {
    p.sefaireLiberer(*this);
    popularite++;
}

void Rebel::coffrer(MembreEmpire &me) const{
    me.sefairEmprisonner(*this);
    me.etat=true;
}

Rebel::Rebel(const string &nom) : Humanoide(nom) {
    popularite=0;
    adjectif="Padawan";
    boissonfavorite="Whisky";
}

void Rebel::sePresenter() const {
    Humanoide::sePresenter();
    parler("Mon rang est "+adjectif+" ma popularité est de "+to_string(popularite));
}
