//
// Created by Razvan on 5/13/2024.
//
#include <iostream>
#include "service.h"
#include "BaniInsuficienti.h"
using namespace std;
service::service() {

}

service::service(repofile* rep) {
    repo = rep;


}

service::~service() {

}

int service::cumpara(int cod, int val, int can){
    monezi m(val, can);
    vector<snacks> lista = repo->getAll();
    int ok =0;
    int pret;
    for (int i=0; i<lista.size(); i++)
        if(lista[i].getcod() == cod) {
            ok = 1;
            pret = lista[i].getpret();
            if (val * can <pret) throw BaniIns("Banii introdusi nu sunt suficienti");

        }
    if (ok==0)
    {
        BaniIns exp("Cod-ul introdus nu exista");
        throw(exp);
    }
    repo->adauga_moneda(m);
    repo->deleteElem(cod);
    repo->saveToFile();
    return repo->restoferit(val*can-pret);

}

service& service::operator=(service *s) {
    repo = s->repo;
    return *this;
}

vector<snacks> service::getAll() {
    return repo->getAll();
}
