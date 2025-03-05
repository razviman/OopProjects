//
// Created by Razvan on 5/12/2024.
//

#include "corn.h"
#include <cstring>
#include <cstdlib>

corn::corn() {
cod = 0;
}

corn::corn(char*nume, int pret, int c) {
    cod = c;

}

corn::corn(const corn &c) {
    cod = c.cod;

}

corn::~corn() {

}

void corn::setcod(int c) {
    cod = c;


}

int corn::getcod() {
    return cod;
}

char *corn::toString() {
    char* s = new char[strlen(nume) + 1+6+2+3];
    strcpy_s(s, strlen( nume) + 1, nume);
    strcat(s, ", ");
    char *nr = new char[5];
    itoa(pret, nr, 10);
    strcat(s, nr);
    delete []nr;
    char *c = new char[5];
    itoa(cod, c, 10);
    strcat(s, c);
    delete []c;
    c = NULL;
    nr = NULL;

    return s;
}

