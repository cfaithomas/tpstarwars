#include <iostream>
#include "Humanoide.h"
#include "Princesse.h"
#include "barman.h"


int main() {
Humanoide h("human");
h.sePresenter();
h.boire();
Princesse p("Leila","Blanche");
p.sePresenter();
cout<<p.quel_est_ton_nom()<<endl;
p.changerRobe("Rouge");
MembreEmpire membreEmpire("dark");
membreEmpire.sePresenter();
membreEmpire.kidnapper(p);
cout<<membreEmpire.quel_est_ton_nom()<<endl;
Rebel r("Luk");
r.tirer(membreEmpire);
r.coffrer(membreEmpire);
r.liberer(p);
r.sePresenter();
barman barman("Dede");
barman.sePresenter();
barman.servir(r);
barman.parler("je te parle");


    return 0;
}
