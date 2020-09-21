//
// Created by eric on 21/09/2020.
//

#ifndef TPSTARWARS_PRINCESSE_H
#define TPSTARWARS_PRINCESSE_H


#include <string>
#include "MembreEmpire.h"
#include "Rebel.h"
#include "Humanoide.h"

using namespace std;
class Princesse :public Humanoide{

private:
    string couleurrobe;
    bool etat;
public:
    Princesse(const string &nom, const string &couleurrobe);

    void sefairekidnapper(const MembreEmpire &me) ;
    void sefaireLiberer(const Rebel &re) ;
    void changerRobe(const string &newcouleurrobe);


};


#endif //TPSTARWARS_PRINCESSE_H
