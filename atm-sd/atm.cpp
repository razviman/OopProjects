//
// Created by Razvan on 5/24/2024.
//

#include "atm.h"
#include <vector>
atm::atm() {

}

atm::atm(Collection &c) {
    col = c;

}

atm::~atm() {

}

atm &atm::operator=(const atm &c) {
tranzactii = c.tranzactii;
col = c.col;
return *this;
}

vector<tranzactie> atm::get_tran() {
    return tranzactii;
}

int atm::sold_cont() {
    int suma=0;
    for(int i=0; i<tranzactii.size(); i++)
        suma = suma + tranzactii[i].get_suma();
    return suma;
}

int atm::sold_bancomat() {
    return col.sold();
}

void atm::backtrack(vector<pereche>& v, vector<int>& sol, int idx, int suma, bool& found) {

if (suma == 0) {
cout << "Solutie: ";
for (int i = 0; i < sol.size(); ++i) {
if (sol[i] > 0) {
cout << v[i].get_val() << "x" << sol[i] << " ";
}
}
cout << endl;
found = true;
return;
}


if (idx == v.size() || suma < 0) {
return;
}


for (int i = 0; i <= v[idx].get_cap() && i * v[idx].get_val() <= suma; ++i) {
sol[idx] = i;
backtrack(v, sol, idx + 1, suma - i * v[idx].get_val(), found);
}

sol[idx] = 0;
}

bool atm::retragere(int suma) {
    vector<pereche> v = col.getAll();
    vector<int> sol(v.size(), 0);
    bool found = false;
    backtrack(v, sol, 0, suma, found);
    return found;
}

bool atm::retragere2(int suma, int var) {
    vector<pereche> v = col.getAll();
    vector<int> sol(v.size(), 0);
    bool found = false;
    int nr = 0;
    backtrack2(v, sol, 0, suma, found, var, nr);
    return found;
}

void atm::backtrack2(vector<pereche>& v, vector<int>& sol, int idx, int suma, bool& found, int var , int &nr_sol) {


if(suma == 0)
    nr_sol++;
if (suma == 0 && var == nr_sol ) {
    vector<int> banc;
    vector<int> solu;

for (int i = 0; i < sol.size(); ++i) {
if (sol[i] > 0) {
    banc.push_back(v[i].get_val());
    solu.push_back(sol[i]);
    pereche stergere_banc(v[i].get_val(), sol[i]);
    col.remove(stergere_banc);
}}
int s = 0;
for(int i=0; i< sol.size(); ++i)
    s = s - v[i].get_val() * sol[i];
tranzactie tran(tranzactii.size(), s, banc, solu);
tranzactii.push_back(tran);
found = true;
return;


}


if (idx == v.size() || suma < 0) {
return;
}


for (int i = 0; i <= v[idx].get_cap() && i * v[idx].get_val() <= suma; ++i) {
sol[idx] = i;
backtrack2(v, sol, idx + 1, suma - i * v[idx].get_val(), found, var, nr_sol);
}

sol[idx] = 0;
}

int atm::adaugare_bani(vector<int> bancnote, vector<int> nrb) {
    int suma =0;
    for(int i=0; i<bancnote.size(); i++) {
        if (bancnote[i] < 1 || nrb[i] <1) return -1;
        else suma = suma + bancnote[i] * nrb[i];
    }
    tranzactie tran(tranzactii.size(), suma, bancnote, nrb);
    tranzactii.push_back(tran);
    for(int i=0; i<bancnote.size(); i++)
{
        pereche p(bancnote[i], nrb[i]);
        col.add(p);
}
    return 1;
}
