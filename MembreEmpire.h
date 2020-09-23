//
// Created by eric on 21/09/2020.
//

#ifndef TPSTARWARS_MEMBREEMPIRE_H
#define TPSTARWARS_MEMBREEMPIRE_H

#include <string>
#include "Princesse.h"

using namespace std;
class Princesse;
class Rebel;
class MembreEmpire:public Humanoide{
public:

    bool etat;

    MembreEmpire(const string &nom);

    void kidnapper(Princesse &p);
    void sefairEmprisonner(const Rebel &r);

    const string quel_est_ton_nom() const override;


private:
    int nbprincesses;
    int recompense;
    string rang;


};


#endif //TPSTARWARS_MEMBREEMPIRE_H
