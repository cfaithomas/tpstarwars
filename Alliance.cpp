//
// Created by eric on 23/09/2020.
//

#include <iostream>
#include "Alliance.h"
#include "Yoda.h"


void Alliance::rejoindreAlliance(Rebel *rebel) {
rebels.push_back(rebel); //ajout d'un rebel dans le vector
cout<<rebel->quel_est_ton_nom()<<" a rejoint l'alliance"<<endl;
/******* augmentation du nombre de rebels dans yoda*********/
for(Rebel *r:rebels)
{
    if(r->quel_est_ton_nom()=="Yoda")
    {
        Yoda *y=(Yoda*)r; //cast du pointeur de rebel en yoda
        y->nbmembres++; //on incremente le nombre de membres de Yoda
    }
}
}

const vector<Rebel *> &Alliance::getRebels() const {
    return rebels;
}
