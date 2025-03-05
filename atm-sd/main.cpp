#include <iostream>
#include "colectie.h"
#include "pereche.h"
#include "tranzactie.h"
#include <vector>
#include "UI.h"
using namespace std;
int main() {
//    Collection rep = Collection();
//    pereche r(2, 4);
//    pereche l(12, 1);
//    rep.add(r);
//    if(rep.search(l)== true) cout << "Este";
//    vector<int> b = {10, 5};
//    vector<int> n = {1, 1};
//    tranzactie tran(1, 15, b, n);
//    tran.toString();

pereche cinci(5, 10);
pereche zece(10, 10);
Collection col;
col.add(cinci);
col.add(zece);
    atm banco= atm(col);
UI ui = UI(banco);
ui.menu();
    return 0;
}
