//
// Created by eric on 21/09/2020.
//

#include "MembreEmpire.h"




void MembreEmpire::kidnapper(Princesse &p) {
p.sefairekidnapper(*this);
parler("si n'es pas avec moi "+p.quel_est_ton_nom()+" alors tu es contre moi!!");
}

MembreEmpire::MembreEmpire(const string &nom) : Humanoide(nom) {
    etat=false;
    rang="soldat";
    nbprincesses=0;
    recompense=100;
    boissonfavorite="Vin de fleur";
}

void MembreEmpire::sefairEmprisonner(const Rebel &r){
parler("je suis fait "+r.quel_est_ton_nom()+" tu m'as eu");
recompense=0;

}

const string MembreEmpire::quel_est_ton_nom() const {
    return Humanoide::quel_est_ton_nom()+" le "+rang;
}

void MembreEmpire::sePresenter() const {
    Humanoide::sePresenter();
    parler("Mon rang est :"+rang+" j'ai enlevé "+to_string(nbprincesses)+" princesse(s) et ma récompense est de "+to_string(recompense)+" peggats");
}

