

#ifndef SEM3_COLLECTION_H
#define SEM3_COLLECTION_H


#include "vectordinamic.h"
#include "pereche.h"
#include <vector>
using namespace std;
class Collection {
private:
    VectorDinamic elems;
public:
    Collection();
    Collection( const Collection &c);
    Collection& operator = (const Collection &c );
    //void init();
    void add(pereche elem);
    void remove(pereche elem);
    bool search(pereche elem);
    vector<pereche> getAll();
    int sold();
    int size();
};

#endif //SEM3_COLLECTION_H
