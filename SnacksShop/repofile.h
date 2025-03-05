//
// Created by Razvan on 5/21/2024.
//

#ifndef LAB9_10_REPOFILE_H
#define LAB9_10_REPOFILE_H
#include "tonomat_repo.h"

class repofile :public tonomat_repo {
private:
    char *fileName;
public:
    repofile(const char *);

    void saveToFile();

    ~repofile();
    };



#endif //LAB9_10_REPOFILE_H
