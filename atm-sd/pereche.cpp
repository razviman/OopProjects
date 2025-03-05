//
// Created by Razvan on 5/24/2024.
//

#include "pereche.h"

pereche::pereche() {
    valoare_bancnota = 0;
    capacity = 0;

}

pereche::pereche(int v, int c) {
    valoare_bancnota = v;
    capacity = c;


}

pereche::pereche(const pereche &p) {

    capacity = p.capacity;
    valoare_bancnota = p.valoare_bancnota;
}

void pereche::modificare_val(int v) {
    valoare_bancnota = valoare_bancnota + v;

}

pereche& pereche::operator=(const pereche &p) {
    capacity = p.capacity;
    valoare_bancnota = p.valoare_bancnota;
    return *this;
}

int pereche::get_val() {
    return valoare_bancnota;
}

int pereche::get_cap() {
    return capacity;
}
void pereche::set_cap(int c) {
    capacity = c;

}

pereche::~pereche() {

}




