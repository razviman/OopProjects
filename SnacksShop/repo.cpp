//
// Created by Razvan on 5/12/2024.
//

#include "repo.h"
#include <iostream>
#include <fstream>
using namespace std;
ofstream fout("stock.txt");

void repo::addElem(const snacks &s) {
    lista_snacks.push_back(s);
}

repo::repo() {

}

vector <snacks> repo::getAll() {
    return lista_snacks;
}

int repo::size() {
    return lista_snacks.size();
}

repo::~repo() {

}

snacks *repo::findbyCod(int cod) {
    for (int i=0; i<lista_snacks.size(); i++)
        if(lista_snacks[i].getcod() == cod )
            return &lista_snacks[i];
    return 0;
}

void repo::deleteElem(int cod) {
    int poz = -1;
    for(int i=0; i<lista_snacks.size(); i++)
        if(lista_snacks[i].getcod()==cod)
            poz = i;
            if(poz!=-1)
            lista_snacks.erase(lista_snacks.begin()+poz);


}

