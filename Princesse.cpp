//
// Created by eric on 21/09/2020.
//

#include "Princesse.h"

Princesse::Princesse(const string &nom, const string &couleurrobe) : Humanoide(nom),
                                                                     couleurrobe(couleurrobe) {
    etat=false; //princesse libre
}
void Princesse::sefairekidnapper(const MembreEmpire &me){
parler("HIIIIIIIIIIIIIIIIIIIIII!!!!!!");
etat=true;
}

void Princesse::sefaireLiberer( const Rebel &re)  {
parler("Merci "+re.quel_est_ton_nom()+"!!!");
etat=false;
}


void Princesse::changerRobe(const string &newcouleurrobe) {
couleurrobe=newcouleurrobe;
parler("Regarder ma nouvelle robe"+couleurrobe);
}
