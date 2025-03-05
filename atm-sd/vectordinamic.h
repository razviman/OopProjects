//
// Created by Razvan on 5/20/2024.
//

#ifndef ATM_SD_VECTORDINAMIC_H
#define ATM_SD_VECTORDINAMIC_H
#include "pereche.h"


typedef pereche TElem;

class VectorDinamic{
private:
    int capacity;
    int nrElems;
    TElem* elems;   //vectorul de elemente

    void resize();

public:
    VectorDinamic();
    VectorDinamic (int capacitate);

    TElem getAt(int i) const;
    VectorDinamic& operator=(const VectorDinamic&);
    void push_back(TElem e);
    void remove(TElem e);
    int size();
    pereche& operator [] (int pos);


};

#endif //ATM_SD_VECTORDINAMIC_H
