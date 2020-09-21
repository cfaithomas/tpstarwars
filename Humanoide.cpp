//
// Created by eric on 21/09/2020.
//

#include <iostream>
#include "Humanoide.h"

Humanoide::Humanoide(const string &nom) : nom(nom){
    boissonfavorite="eau";
}

void Humanoide::parler(const string &texte) {
cout<<nom<<" - "<<texte<<endl;
}

const string &Humanoide::quel_est_ton_nom() {
    return nom;
}

const string &Humanoide::quel_est_ta_boissonfavorite() {
    return boissonfavorite;
}

void Humanoide::sePresenter() {
parler("Bonjour,mon nom est "+nom+" ma boisson favorite: "+boissonfavorite);
}

void Humanoide::boire() {
parler("Ah un bon verre de "+boissonfavorite+" Gloups");
}
