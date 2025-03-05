//
// Created by Razvan on 5/12/2024.
//

#ifndef LAB9_10_SNACKS_H
#define LAB9_10_SNACKS_H


#include <cstring>

class snacks {
protected:
    int cod;
    char *nume;
    int pret;
public:
    snacks();
    snacks(char*, int, int);
    snacks(const snacks &);
    ~snacks();
    void setnume(char*);
    void setpret(int );
    void setcod(int);
    char* getnume();
    int getpret();
    int getcod();
    char* toString();
    char* toString2();
    snacks& operator=(const snacks& other) noexcept {
        if (this == &other) {
            return *this; // Self-assignment guard
        }

        // Eliberăm memoria existentă
        delete[] nume;

        // Mutăm datele
        cod = other.cod;
        nume = new char[strlen(other.nume)+1];
        strcpy(nume, other.nume);
        pret = other.pret;


        return *this;
    }
};


#endif //LAB9_10_SNACKS_H
