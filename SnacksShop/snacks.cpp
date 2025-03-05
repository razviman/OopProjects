//
// Created by Razvan on 5/12/2024.
//

#include "snacks.h"
#include <cstring>;
#include <cstdlib>

snacks::snacks() {

    nume = NULL;
    pret = 0;
    cod = 0;
}

snacks::snacks(char *n, int p, int c) {
    this->nume = new char[strlen(n)];
    strcpy(nume, n);
    pret = p;
    cod = c;
}

snacks::snacks(const snacks &s) {
    if (s.nume){

        this->nume = new char[strlen(s.nume)];

    }
    strcpy(nume, s.nume);
    pret = s.pret;
    cod = s.cod;
}

snacks::~snacks() {
    if (this->nume){
        delete []nume;
        nume = NULL;}

}

void snacks::setnume(char *s) {
    if (this->nume)
        delete []nume;
    this->nume = new char[strlen(s)];
    strcpy_s(nume, strlen(s)+1, s);

}

void snacks::setpret(int p) {
    pret = p;


}

char *snacks::getnume() {
    return nume;
}

int snacks::getpret() {
    return pret;
}

char *snacks::toString() {
    char* s = new char[strlen(nume) + 1+6+2+6];
    strcpy_s(s, strlen( nume) + 1, nume);
    strcat(s, " ");
    char *nr = new char[5];
    itoa(pret, nr, 10);
    strcat(s, nr);
    delete []nr;
    nr = NULL;
    strcat(s, " ");
    char *c = new char[5];
    itoa(cod, c, 10);
    strcat(s,c);
    delete []c;
    c = NULL;
    return s;
}

char *snacks::toString2() {
    char* s = new char[strlen(nume) + 1+6+2+6+20];
    strcpy_s(s, strlen( nume) + 1, nume);
    strcat(s, "; Pretul:");
    char *nr = new char[5];
    itoa(pret, nr, 10);
    strcat(s, nr);
    delete []nr;
    nr = NULL;
    strcat(s, "; Codul:");
    char *c = new char[5];
    itoa(cod, c, 10);
    strcat(s,c);
    delete []c;
    c = NULL;
    return s;
}

void snacks::setcod(int c) {
    cod = c;

}

int snacks::getcod() {
    return cod;
}
