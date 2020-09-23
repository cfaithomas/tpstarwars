//
// Created by eric on 21/09/2020.
//

#ifndef TPSTARWARS_REBEL_H
#define TPSTARWARS_REBEL_H


#include "Humanoide.h"
#include "MembreEmpire.h"
#include "Princesse.h"
class MembreEmpire;
class Princesse;
class Rebel: public Humanoide {

private:
    int popularite;
    string adjectif;
public:
    Rebel(const string &nom);

    void tirer(const MembreEmpire &me ) const;
    void liberer(Princesse &p) ;
    void coffrer(MembreEmpire &me) const;

};


#endif //TPSTARWARS_REBEL_H
