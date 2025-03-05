//
// Created by Razvan on 5/30/2024.
//

#ifndef ATM_SD_UI_H
#define ATM_SD_UI_H
#include "atm.h"

class UI {
private:
    atm bancomat;
public:
    UI();
    UI(atm&);
    void show_menu();
    void menu();
    void adauga_bancnote();
    void afis_tranzactii();
    void retragere();
};


#endif //ATM_SD_UI_H
