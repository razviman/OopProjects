#include <iostream>
using namespace std;
#include "snacks.h"
#include "repo.h"
#include "tonomat_repo.h"
#include "monezi.h"
#include "service.h"
#include "ui.h"
#include "teste.h"
#include "repofile.h"

int main() {

snacks p("ciocolata", 8, 22);
    snacks x("rom", 55, 10);
    snacks c("mar", 4, 1);


repo r;
r.addElem(p);
r.addElem(x);
r.addElem(c);
vector<snacks> elemente = r.getAll();
for (int i=0; i<elemente.size(); i++)
    cout << elemente[i].toString();
repofile *rep = new repofile("stock.in");
monezi unu(1, 5);
monezi cinci(5, 2);
monezi zece(10, 2);
monezi cinciz(50, 2);
rep->saveToFile();
rep->adauga_moneda(unu);
    rep->adauga_moneda(cinci);
    rep->adauga_moneda(zece);
    rep->adauga_moneda(cinciz);
//rep->addElem(p);
//rep->addElem(x);
//rep->addElem(c);
teste();
service ser(rep);
ui ui(&ser);
ui.meniu();

    return 0;
}
