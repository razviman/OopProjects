//
// Created by Razvan on 5/13/2024.
//

#include "monezi.h"

monezi::monezi() {
valoare = 0;
cantitate = 0;
}

monezi::monezi(int v, int c) {
    valoare = v;
    cantitate = c;

}

monezi::~monezi() {

}

int monezi::getvaloare() {
    return valoare;
}

int monezi::getcantitate() {
    return cantitate;
}

void monezi::adaugamonezi(int c) {
    cantitate = cantitate + c;

}

