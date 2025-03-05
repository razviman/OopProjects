//
// Created by Razvan on 5/30/2024.
//

#ifndef ATM_SD_TRANZACTIE_H
#define ATM_SD_TRANZACTIE_H
#include <vector>
#include <iostream>
using namespace std;
class tranzactie {
private:
    int id;
    int suma;
    vector<int> bancnote;
    vector<int> nr_bancnote;

public:
    tranzactie(int, int, vector<int>, vector<int>);
    tranzactie(const tranzactie&);
    int get_id();
    int get_suma();
    vector<int> get_bancnote();
    vector<int> get_nr();
    void toString();
    ~tranzactie();
};


#endif //ATM_SD_TRANZACTIE_H
