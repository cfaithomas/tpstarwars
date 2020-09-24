//
// Created by eric on 23/09/2020.
//

#ifndef TPSTARWARS_ALLIANCE_H
#define TPSTARWARS_ALLIANCE_H


#include "Rebel.h"
#include <vector>
class Alliance {
private:
    vector<Rebel*> rebels;
public:
    void rejoindreAlliance(Rebel *rebel) ;

    const vector<Rebel *> &getRebels() const;

};


#endif //TPSTARWARS_ALLIANCE_H
