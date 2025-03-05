//
// Created by Razvan on 5/12/2024.
//
#include "snacks.h"
#ifndef LAB9_10_CORN_H
#define LAB9_10_CORN_H


class corn :public snacks{
private:
    int cod;
public:
    corn();
    corn(char*, int, int);
    corn(const corn &);
    ~corn();
    void setcod(int);
    int getcod();
    char* toString();
};


#endif //LAB9_10_CORN_H
