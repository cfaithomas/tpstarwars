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
protected:
    string boissonfavorite;

public:
    Humanoide();
    explicit Humanoide(const string &nom);

    virtual void parler(const string &texte) const;
    virtual void boire() const;
    virtual const string quel_est_ton_nom() const;
    virtual const string& quel_est_ta_boissonfavorite() const;
    virtual void sePresenter() const;



};


#endif //TPSTARWARS_HUMANOIDE_H
