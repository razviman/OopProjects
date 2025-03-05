//
// Created by Razvan on 5/13/2024.
//

#ifndef LAB9_10_UI_H
#define LAB9_10_UI_H

#include "service.h"
#include "BaniInsuficienti.h"

class ui {
private:
    service servi;
public:
    ui();
    ui(service*);
    ~ui();
    void afisaremeniu();
    void meniu();
    void afisaresnacks();
    void cumparasnack();
};


#endif //LAB9_10_UI_H
