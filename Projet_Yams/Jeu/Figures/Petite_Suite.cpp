//
// Created by Moi on 04/01/2024.
//

#include <algorithm>
#include "Petite_Suite.h"

Petite_Suite::Petite_Suite(const std::vector<int> &valdices) : valDes(valdices) {

}

int Petite_Suite::calcul(const std::vector<Figure *> &figures) const {
    if(valDes.size() == 4){
        std::vector<int> sortedDes = valDes;
        std::sort(sortedDes.begin(), sortedDes.end());

        if(sortedDes[0] < sortedDes[1] && sortedDes[1] < sortedDes[2] && sortedDes[2] < sortedDes[3]){
            return this->gain;
        }
    }
}
