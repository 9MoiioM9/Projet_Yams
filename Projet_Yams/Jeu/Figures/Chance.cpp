//
// Created by Moi on 04/01/2024.
//

#include <algorithm>
#include "Chance.h"

int Chance::calcul(const std::vector<int> &main) {
    if(main.size() == 5){
        int score = main[0] + main[1] + main[2] + main[3] + main[4];
        return score;
    }
}

Chance::Chance(){
    this->numero = 13;
    this->name = "Chance";
}
