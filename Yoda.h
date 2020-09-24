//
// Created by eric on 23/09/2020.
//

#ifndef TPSTARWARS_YODA_H
#define TPSTARWARS_YODA_H


#include "Rebel.h"
#include "Alliance.h"
class Yoda : public Rebel{

public:
    Yoda(Alliance &alliance);

    void sePresenter() const override;

    void telepathie(const Alliance &alliance,const MembreEmpire &me) const ; //en argument le membre de l'empire recherché
    int nbmembres;



};


#endif //TPSTARWARS_YODA_H
