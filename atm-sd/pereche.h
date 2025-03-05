//
// Created by Razvan on 5/24/2024.
//

#ifndef SEM3_PERECHE_H
#define SEM3_PERECHE_H


class pereche {
private:
    int valoare_bancnota;
    int capacity;
public:
    pereche();
    pereche(int, int);
    pereche(const pereche&);
    void modificare_val(int);
    pereche& operator=(const pereche&);
    int get_val();
    int get_cap();
    void set_cap(int);
    ~pereche();

};


#endif //SEM3_PERECHE_H
