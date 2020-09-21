//
// Created by eric on 21/09/2020.
//

#ifndef TPSTARWARS_HUMANOIDE_H
#define TPSTARWARS_HUMANOIDE_H

#include <string>

using namespace std;
class Humanoide {

    private:
    string nom;
    string boissonfavorite;

public:
    Humanoide(const string &nom);

    virtual void parler(const string &texte);
    virtual void boire();
    virtual const string& quel_est_ton_nom();
    virtual const string& quel_est_ta_boissonfavorite();
    virtual void sePresenter();



};


#endif //TPSTARWARS_HUMANOIDE_H
