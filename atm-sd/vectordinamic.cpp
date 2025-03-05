//
// Created by Razvan on 5/20/2024.
//


#include <stdexcept>
#include "vectordinamic.h"
using namespace std;

VectorDinamic::VectorDinamic(int capacitate) {
    if (capacitate<1){
        throw invalid_argument("capacitate negativa");
    }
    this->elems=new TElem [capacitate];
    this->nrElems=0;
    this->capacity=capacitate;
}

void VectorDinamic::push_back(TElem e) {
    this->elems[nrElems] = e;
    this->nrElems++;
    if(nrElems==capacity){
        resize();
    }
}

void VectorDinamic::resize() {
    TElem * aux = new TElem [2*capacity];
    for(int i=0; i<capacity; i++)
        aux[i] = this->elems[i];
    delete[] elems;
    this->elems = aux;
    this->capacity = 2*capacity;
}

TElem VectorDinamic::getAt(int i) const {
    if((i>=0) && (i<nrElems)){
        return this->elems[i];
    }
    else{
        throw invalid_argument("pozitia nu este valida ");
    }
}

VectorDinamic& VectorDinamic::operator=(const VectorDinamic&c) {
    elems = c.elems;
    capacity = c.capacity;
    nrElems = c.nrElems;
    return *this;
}

VectorDinamic::VectorDinamic() {
    this->elems=new TElem [10];
    this->nrElems=0;
    this->capacity=10;

}

int VectorDinamic::size() {
    return nrElems;
}

pereche &VectorDinamic::operator[](int pos) {
    if( pos < nrElems ) return elems[pos] ; else throw out_of_range("invalid pos") ;
}

void VectorDinamic::remove(TElem e) {
    TElem * elems_new = new TElem [capacity];
    int poz;
for (int i=0; i<nrElems; i++)
    if(elems[i].get_val()==e.get_val())
        poz = i;
    for (int i=0; i<poz; i++)
        elems_new[i] = elems[i];
    for(int i=poz+1; i<nrElems; i++)
        elems_new[i-1] = elems[i];
    nrElems--;

    elems = new TElem [capacity];
    elems = elems_new;


}



