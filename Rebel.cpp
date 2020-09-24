//
// Created by eric on 21/09/2020.
//

#include <iostream>
#include "Rebel.h"
#include "Yoda.h"
#include "Alliance.h"

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

Rebel::Rebel(const string &nom,Alliance &alliance) : Humanoide(nom) {
    popularite=0;
    adjectif="Padawan";
    boissonfavorite="Whisky";
    alliance.rejoindreAlliance(this); //this car est pointeur est attendu

}

void Rebel::sePresenter() const {
    Humanoide::sePresenter();
    parler("Mon rang est "+adjectif+" ma popularité est de "+to_string(popularite));
}

void Rebel::recevoirMessage(const Rebel &rebel,const string &message) const {
    if(quel_est_ton_nom()!="Yoda") {
        cout << rebel.quel_est_ton_nom() << ")))"<<quel_est_ton_nom()<<" - "<< message << endl;

        cout << quel_est_ton_nom() << ")))"<<rebel.quel_est_ton_nom()<<" - "<< "---------------Message bien reçu-------------------------"
             << endl;
    }
}
