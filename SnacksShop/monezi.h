//
// Created by Razvan on 5/13/2024.
//

#ifndef LAB9_10_MONEZI_H
#define LAB9_10_MONEZI_H


class monezi {
private:
    int valoare;
    int cantitate;
public:
    monezi();
    monezi(int, int);
    ~monezi();
    int getvaloare();
    int getcantitate();
    void adaugamonezi(int);
};


#endif //LAB9_10_MONEZI_H
