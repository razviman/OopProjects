//
// Created by Razvan on 5/28/2024.
//

#ifndef LAB9_10_VALIDATORDATE_H
#define LAB9_10_VALIDATORDATE_H
#include <stdexcept>
using namespace std;
class BaniIns :public runtime_error {
private:
    char* message;
public:
    BaniIns(char* msg) :
            runtime_error(msg), message(msg){
    }
    char* what() {
        return message;
    }
};



#endif //LAB9_10_VALIDATORDATE_H
