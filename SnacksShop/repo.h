//
// Created by Razvan on 5/12/2024.
//
using namespace std;
#ifndef LAB9_10_REPO_H
#define LAB9_10_REPO_H

#include "snacks.h"
#include <vector>
class repo {
protected:
    vector<snacks> lista_snacks;
public:
    repo();
    void addElem(const snacks&);
    void deleteElem(int cod);
    vector<snacks> getAll();
    int size();
    snacks* findbyCod(int);
    ~repo();
};


#endif //LAB9_10_REPO_H
