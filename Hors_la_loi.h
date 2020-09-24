//
// Created by eric on 24/09/2020.
//

#ifndef TPSTARWARS_HORS_LA_LOI_H
#define TPSTARWARS_HORS_LA_LOI_H


#include "Princesse.h"

class Princesse;
class Rebel;
class Hors_la_loi {

    virtual void kidnapper(Princesse &p)=0; //méthode pure virtelle virtual + =0
    virtual void sefairEmprisonner(const Rebel &r)=0;
    virtual const string quel_est_ton_nom() const=0 ;
    virtual int quel_est_ta_recompense() const=0;

};


#endif //TPSTARWARS_HORS_LA_LOI_H
