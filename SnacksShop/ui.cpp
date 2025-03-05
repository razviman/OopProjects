//
// Created by Razvan on 5/13/2024.
//

#include "ui.h"
#include <iostream>
#include "validator.h"
using namespace std;
ui::ui() {

}

ui::ui(service *s) {
    servi = s;
}

ui::~ui() {

}

void ui::afisaremeniu() {
cout << "1.Afisare snacks" << endl;
cout << "2.Cumparare snack" << endl;
cout << "0.Exit";
}

void ui::meniu() {
    bool action = true;
    while(action) {
        int comanda;
        afisaremeniu();
        cin >> comanda;
        if (comanda==1)
            try {
                afisaresnacks();
            }catch (BaniIns &c) {
                cout << c.what() << endl;
            }
        else if(comanda==2)
            try{
            cumparasnack();}catch (BaniIns &c) {
                cout << c.what() << endl;
            }
        else if (comanda==0)
            action = false;

    }

}

void ui::afisaresnacks() {
        vector<snacks> lista = servi.getAll();
        if (lista.size()==0) throw BaniIns("Nu exista alimente in stock");
        for (int i = 0; i < lista.size(); i++)
            cout << lista[i].toString2() << endl;
}

void ui::cumparasnack() {
    int cod, moneda, cantitate;
    try {
    cout << "Introduceti codul snackului ";
    cin >> cod;
    cout << "Introduceti moneda ";
    cin >> moneda;
    cout << "Cate monede ati introdus ";
    cin >> cantitate;
    Validator::Validate(cod, moneda, cantitate);
    }catch(invalid_argument &e){
        cout << e.what() << endl;
    }

    if (moneda!=1 && moneda!=5 && moneda!=10 && moneda!=50)
    throw BaniIns("Aceasta moneda nu poate fi introdusa");
    else {
        try{
        int k =servi.cumpara(cod, moneda, cantitate);
        cout << "Restul oferit este de " << k << endl;}catch (BaniIns &c){
            cout << c.what() << endl;
        }

        }

    }





