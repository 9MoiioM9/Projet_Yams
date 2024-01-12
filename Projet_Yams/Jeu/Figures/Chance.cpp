//
// Created by Moi on 04/01/2024.
//

#include <algorithm>
#include "Chance.h"

int Chance::calcul(const std::vector<Figure> &) {
    if(valDes.size() == 5){
        this->gain = valDes[0] + valDes[1] + valDes[2] + valDes[3] + valDes[4];
        return gain;
    }
}

Chance::Chance(const std::vector<int> &valdices) : valDes(valdices) {

}
