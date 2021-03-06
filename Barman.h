//
// Created by eric on 23/09/2020.
//

#ifndef TPSTARWARS_BARMAN_H
#define TPSTARWARS_BARMAN_H

#include <string>
#include "Humanoide.h"

using namespace std;
class Barman : public Humanoide{

private:
    string nom;
    string nomdubar;

public:
    Barman(const string &nom);

    Barman(const string &nom, const string &nomdubar);

    void parler(const string &texte) const override;

    void sePresenter() const override;

    void servir(const Humanoide &h) const;


};


#endif //TPSTARWARS_BARMAN_H
