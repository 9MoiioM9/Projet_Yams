//
// Created by Moi on 13/01/2024.
//

#include "Combinaison.h"

Combinaison::Combinaison(const int &numero) {
    this->name = "Combinaison de " + std::to_string(numero);
}

int Combinaison::calcule(const std::vector<int> &main, int &numero) {
    for(int x : main){
        if(x == numero){
            this->gain += x;
        }
    }
    return this->gain;
}
