//
// Created by eric on 21/09/2020.
//

#include <iostream>
#include "Humanoide.h"

Humanoide::Humanoide(const string &nom) : nom(nom){
    boissonfavorite="eau";
}

void Humanoide::parler(const string &texte) const {
cout<<nom<<" - "<<texte<<endl;
}

const string &Humanoide::quel_est_ton_nom() const{
    return nom;
}

const string &Humanoide::quel_est_ta_boissonfavorite() const {
    return boissonfavorite;
}

void Humanoide::sePresenter() const {
parler("Bonjour,mon nom est "+nom+" ma boisson favorite: "+boissonfavorite);
}

void Humanoide::boire() const {
parler("Ah un bon verre de "+boissonfavorite+" Gloups");
}

Humanoide::Humanoide() {

}
