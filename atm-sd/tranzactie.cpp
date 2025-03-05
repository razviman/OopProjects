//
// Created by Razvan on 5/30/2024.
//
#include <iostream>
#include "tranzactie.h"
using namespace std;
tranzactie::tranzactie(int id, int suma, vector<int> banc, vector<int> nr) {
    this->id=id;
    this->suma = suma;
    bancnote = banc;
    nr_bancnote = nr;


}

tranzactie::~tranzactie() {

}

tranzactie::tranzactie(const tranzactie &t) {
    this->id=t.id;
    this->suma = t.suma;
    bancnote = t.bancnote;
    nr_bancnote = t.nr_bancnote;
    }



int tranzactie::get_id() {
    return id;
}

int tranzactie::get_suma() {
    return suma;
}

vector<int> tranzactie::get_bancnote() {
    return bancnote;
}

vector<int> tranzactie::get_nr() {
    return nr_bancnote;
}

void tranzactie::toString() {
    cout << "Tranzactia ID: " << id << " Suma: " << suma << endl;
    int i=0;
    for(int i=0; i<nr_bancnote.size(); i++)
        cout << " Bancnota: " << bancnote[i] << " Nr. buc: " << nr_bancnote[i] << endl;
}
