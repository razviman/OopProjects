//
// Created by Razvan on 5/24/2024.
//

#ifndef ATM_SD_ATM_H
#define ATM_SD_ATM_H
#include "colectie.h"
#include <iostream>
#include "tranzactie.h"
#include <vector>

class atm {
private:
    Collection col;
    vector<tranzactie> tranzactii;
public:
    atm();
    atm(Collection&c);
    int adaugare_bani(vector<int>, vector<int>);
    ~atm();
    atm& operator = (const atm &c );
    vector<tranzactie> get_tran();
    int sold_cont();
    int sold_bancomat();
    bool retragere(int);
    void backtrack(vector<pereche>& v, vector<int>& sol, int idx, int suma, bool&);
    bool retragere2(int, int);
    void backtrack2(vector<pereche>& v, vector<int>& sol, int idx, int suma, bool&, int, int&);

};


#endif //ATM_SD_ATM_H
