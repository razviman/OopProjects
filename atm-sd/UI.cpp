//
// Created by Razvan on 5/30/2024.
//

#include "UI.h"

UI::UI(atm &a) {
bancomat = a;
}

void UI::show_menu() {
cout << "MENIU" << endl;
cout << "1.Adaugare" << endl;
cout << "2.Retragere" << endl;
cout << "3.Afisare tranzactii"<<endl;
cout << "4.Sold cont" << endl;
cout << "5.Sold bancomat" << endl;
cout << "0.Iesire" << endl;
}

void UI::menu() {
bool ruleaza = true;
while (ruleaza) {
    int action;
    show_menu();
    cin >> action;
    if (action==0) ruleaza= false;
    else if(action==1) adauga_bancnote();
    else if (action==2) retragere();
    else if(action==3) afis_tranzactii();
    else if (action==4) cout << bancomat.sold_cont()<<endl;
    else if (action==5) cout << bancomat.sold_bancomat()<<endl;
    else cout << "Comanda invalida" << endl;
}
}

void UI::adauga_bancnote() {
    vector<int> bancnote, nr_b;
cout << "Cate bancnote diferite introduce? ";
int nr_dif;
cin >> nr_dif;
for(int i=0; i<nr_dif; i++){
    int banc , nr;
    cout <<"Valoarea bancnotei " << endl;
    cin >> banc;
    cout << "Numarul de bancnote " << endl;
    cin >> nr;
    bancnote.push_back(banc);
    nr_b.push_back(nr);
}
    if (bancomat.adaugare_bani(bancnote, nr_b)==1)
        cout<< "Adaugare reusita";
    else cout << "Valoare bancnota sau cantitate introdusa gresit";
    cout << endl;
}

UI::UI() {
    atm c;
    bancomat.operator=(c);

}

void UI::afis_tranzactii() {
    for(int i=0; i<bancomat.get_tran().size(); i++)
        bancomat.get_tran()[i].toString();

}

void UI::retragere() {
    int suma, var;
    cout << "Introduceti suma pe care vreti sa o retrageti: "<< endl;
    cin >> suma;
    if(bancomat.retragere(suma)) {
        cout << "Introduceti varianta dorita " << endl;
        cin >> var;
        bancomat.retragere2(suma, var);

    }
    else cout << "Nu puteti retrage aceasta suma" << endl;


}
