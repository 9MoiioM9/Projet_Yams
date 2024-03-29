//
// Created by Moi on 04/01/2024.
//

#include <algorithm>
#include "Petite_Suite.h"

Petite_Suite::Petite_Suite() {
    this->gain = 30;
    this->numero = 10;
    this->name = "Petite_Suite";
}

int Petite_Suite::calcul(const std::vector<int> &main) const {
    if(main.size() == 5){
        std::vector<int> sortedDices = main;
        std::sort(sortedDices.begin(), sortedDices.end());

        if(sortedDices[0] < sortedDices[1] && sortedDices[1] < sortedDices[2] && sortedDices[2] < sortedDices[3]){
            return this->gain;
        }
    }
    return 0;
}
