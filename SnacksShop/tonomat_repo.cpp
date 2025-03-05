//
// Created by Razvan on 5/13/2024.
//
#include <iostream>
#include <fstream>
#include "tonomat_repo.h"
#include "snacks.h"
using namespace std;
tonomat_repo::tonomat_repo() {

}

tonomat_repo::~tonomat_repo() {

}

void tonomat_repo::adauga_moneda(monezi mon)
{
    int ok =0;
    for (int i=0; i<monede.size(); i++)
        if(monede[i].getvaloare() == mon.getvaloare() && ok == 0) {
            monede[i].adaugamonezi(mon.getcantitate());
        ok = 1;
        }
    if (ok==0) monede.push_back(mon);

}

int tonomat_repo::restoferit(int rest) {
    int restinitial = rest;
    int ok = 1;
    while(rest!=0 && ok == 1) { int max = 0;
        ok =0;
        int poz;
        for(int i=0; i<monede.size(); i++)
            if (monede[i].getvaloare() <= rest && max <= monede[i].getvaloare() && monede[i].getcantitate() > 0)
            { ok =1;
                max = monede[i].getvaloare();
            poz = i;
            }
    if (max!=0)
    {rest = rest - max;
        monede[poz].adaugamonezi(-1);
    }}

    return restinitial - rest;


}

