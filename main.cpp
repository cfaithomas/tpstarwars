#include <iostream>
#include "Humanoide.h"
#include "Princesse.h"
#include "Barman.h"
#include "Alliance.h"
#include "Yoda.h"


int main() {
    Alliance a;
    Yoda yoda(a);
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
    Rebel r("Luk",a);
    Rebel r2("Luk2",a);
    Rebel r3("Luk3",a);
    r.tirer(membreEmpire);
//r.coffrer(membreEmpire);
    r.liberer(p);
    r.sePresenter();
    Barman barman("Dede");
    barman.sePresenter();
    barman.servir(r);
    barman.parler("je te parle");
    yoda.telepathie(a,membreEmpire);
    yoda.sePresenter();



    return 0;
}
