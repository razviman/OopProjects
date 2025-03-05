//
// Created by Razvan on 5/13/2024.
//

#ifndef LAB9_10_SERVICE_H
#define LAB9_10_SERVICE_H
#include "repofile.h"
#include "BaniInsuficienti.h"
class service {
private:
    repofile *repo;
public:
    service();
    service(repofile*);
    ~service();
    int cumpara(int, int, int );
    service& operator=(service *);
    vector<snacks> getAll();
};



#endif //LAB9_10_SERVICE_H
