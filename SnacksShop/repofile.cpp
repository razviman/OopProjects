
#include "repofile.h"
#include <fstream>
#include <iostream>
using namespace std;
repofile::repofile(const char * file):tonomat_repo() {
    fileName = (char*)file;
    ifstream fin(fileName);
    char den[100];
    int pret, cod;

    while (fin >> den >> pret >> cod) {
        snacks s(den, pret, cod);
        lista_snacks.push_back(s);
    }


    fin.close();
}

void repofile::saveToFile() {
    ofstream fout(fileName);
    for (int i = 0; i < size(); i++ ){
        fout << lista_snacks[i].getnume() << " " << lista_snacks[i].getpret() << " " << lista_snacks[i].getcod();
        fout << endl;
    }

    fout.close();
}

repofile::~repofile() {

}




