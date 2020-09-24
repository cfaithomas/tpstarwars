//
// Created by eric on 23/09/2020.
//

#include "Yoda.h"

Yoda::Yoda(Alliance &alliance) : Rebel("Yoda",alliance) {
    adjectif="Grand Maitre";
    nbmembres=0;

}

void Yoda::telepathie(const Alliance &alliance,const MembreEmpire &me) const {
for(Rebel *rebel:alliance.getRebels())
{
    rebel->recevoirMessage(*this,"Le côté obscur de la Force, redouter tu dois.!! "+to_string(me.quel_est_ta_recompense())+" peggats à qui arrêtera "+me.quel_est_ton_nom()+" le Membre de l’empire mort ou vif");
}
}

void Yoda::sePresenter() const {
    Rebel::sePresenter(); //Appel de la méthode de niveau supérieur
    parler("Je commmande "+to_string(nbmembres)+" rebels");
}

