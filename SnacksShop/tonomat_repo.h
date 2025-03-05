//
// Created by Razvan on 5/13/2024.
//

#ifndef LAB9_10_TONOMAT_REPO_H
#define LAB9_10_TONOMAT_REPO_H

#include "repo.h"
#include "monezi.h"
class tonomat_repo: public repo{
protected:
    vector<monezi> monede;
public:
    tonomat_repo();
    ~tonomat_repo();

    int restoferit(int);

    void adauga_moneda(monezi);
};


#endif //LAB9_10_TONOMAT_REPO_H
