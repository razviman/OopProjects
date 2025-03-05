//
// Created by Razvan on 5/20/2024.
//
#include <iostream>
#include "colectie.h"
using namespace std;
Collection::Collection() {
    VectorDinamic vec(10);
    elems = vec;
}

Collection::Collection(const Collection &c) {
    elems = c.elems;

}

void Collection::add(pereche elem) {
    int ok=0;

    for(int i =0; i<elems.size(); i++)
        if(elem.get_val()==elems[i].get_val()){ elems[i].modificare_val(elem.get_cap());
            ok = 1;}
    if (ok==0)
        elems.push_back(elem);

}

void Collection::remove(pereche elem) {
    for(int i =0; i<elems.size(); i++)
        if(elem.get_val()==elems[i].get_val())
        {
            if(elem.get_cap()<elems[i].get_cap()) elems[i].modificare_val(-elem.get_cap());
            else
                elems.remove(elem);
        }


}

bool Collection::search(pereche elem) {
    for(int i =0; i<elems.size(); i++)
    { cout << elems[i].get_val() << endl;
        if(elems[i].get_val() == elem.get_val())
            return true;}
    return false;
}

int Collection::size() {
    return elems.size();
}

Collection &Collection::operator=(const Collection &c) {
    elems = c.elems;
    return *this;
}

int Collection::sold() {
    int suma=0;
    for(int i=0; i<elems.size(); i++)
        suma = suma + elems[i].get_val()*elems[i].get_cap();
    return suma;
}

vector<pereche> Collection::getAll() {
    vector<pereche> elemente;
    for (int i=0; i<elems.size(); i++)
        elemente.push_back(elems[i]);
    return elemente;
}




