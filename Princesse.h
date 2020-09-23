//
// Created by eric on 21/09/2020.
//

#ifndef TPSTARWARS_PRINCESSE_H
#define TPSTARWARS_PRINCESSE_H


#include <string>

#include "Rebel.h"
#include "MembreEmpire.h"

using namespace std;
class MembreEmpire; //predeclaration dans le cas de  d'inter dépendance entre classes
class Rebel;
class Princesse :public Humanoide{

private:
    string couleurrobe;
    bool etat;
public:
    Princesse(const string &nom, const string &couleurrobe);

    void sefairekidnapper(const MembreEmpire &me) ;
    void sefaireLiberer(const Rebel &re)  ;
    void changerRobe(const string &newcouleurrobe);


};


#endif //TPSTARWARS_PRINCESSE_H
