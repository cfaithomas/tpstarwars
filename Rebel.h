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
class Alliance;
class Rebel: public Humanoide {

private:
    int popularite;
protected:
    string adjectif;
public:
    Rebel(const string &nom,Alliance &alliance);

    void tirer(const MembreEmpire &me ) const;
    void liberer(Princesse &p) ;
    void coffrer(MembreEmpire &me) const;

    void sePresenter() const override;
    void recevoirMessage(const Rebel &rebel,const string &message) const;


};


#endif //TPSTARWARS_REBEL_H
