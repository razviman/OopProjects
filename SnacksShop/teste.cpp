//
// Created by Razvan on 5/15/2024.
//
#include "snacks.h"
#include <cassert>
#include <cstring>
#include <iostream>
#include "teste.h"
#include "repo.h";
using namespace std;
#include "tonomat_repo.h"
#include "monezi.h"


teste::teste() {
    char * x = new char[10];
    strcpy(x,"ciocolata");
    snacks p(x, 8, 22);
    repo *r = new repo();
    tonomat_repo * rep = new tonomat_repo();
    monezi unu(2, 2);
    monezi doi(3, 3);
    rep->adauga_moneda(unu);
    rep->adauga_moneda(doi);
    rep->addElem(p);
    assert(rep->restoferit(5) == 5);
    r->addElem(p);
    assert(r->size()==1);
    assert(strcmp(p.getnume(),"ciocolata")==0);
    assert(p.getcod() == 22);
    assert(p.getpret()==8);
    strcpy(x,"corn");
    p.setnume(x);
    assert(strcmp(p.getnume(),"corn")==0);
    p.setpret(2);
    assert(p.getpret()==2);
    cout << "Testele au trecut" << endl;


}
