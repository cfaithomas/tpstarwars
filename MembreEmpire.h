//
// Created by eric on 21/09/2020.
//

#ifndef TPSTARWARS_MEMBREEMPIRE_H
#define TPSTARWARS_MEMBREEMPIRE_H

#include <string>
#include "Princesse.h"
#include "Hors_la_loi.h"

using namespace std;
class Princesse;
class Rebel;
class MembreEmpire:public Humanoide,public Hors_la_loi{
public:

    bool etat;

    MembreEmpire(const string &nom);

    void kidnapper(Princesse &p)override;

    void sefairEmprisonner(const Rebel &r) override;

    const string quel_est_ton_nom() const override;

    int quel_est_ta_recompense() const override;

    void sePresenter() const override;


private:
    int nbprincesses;
    int recompense;
    string rang;


};


#endif //TPSTARWARS_MEMBREEMPIRE_H
