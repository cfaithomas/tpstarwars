#include <iostream>
#include "Humanoide.h"
#include "Princesse.h"


int main() {
Humanoide h("human");
h.sePresenter();
h.boire();
Princesse p("Leila","Blanche");
p.sePresenter();
p.changerRobe("Rouge");
MembreEmpire membreEmpire("dark");
membreEmpire.kidnapper(p);
Rebel r("Luk");
r.tirer(membreEmpire);
r.coffrer(membreEmpire);
r.liberer(p);

    return 0;
}
