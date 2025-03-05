//
// Created by Razvan on 5/28/2024.
//

#ifndef LAB9_10_VALIDATOR_H
#define LAB9_10_VALIDATOR_H
#include <stdexcept>
#include <string>

class Validator {
public:
    static void Validate(int cod, int mod, int can) {
        if (cod < 0) {
            throw std::invalid_argument("Codul trebuie sa fie un numar pozitiv.");
        }
        if (mod < 1) {
            throw std::invalid_argument("Valoarea bancnotei nu poate fi negativa");
        }
        if (can < 1) {
            throw std::invalid_argument("Cantitatea trebuie sa fie mai mare decat 1");
        }
    }
};
#endif //LAB9_10_VALIDATOR_H
