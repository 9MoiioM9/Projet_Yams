//
// Created by Moi on 04/01/2024.
//

#include <algorithm>
#include "Grande_Suite.h"

Grande_Suite::Grande_Suite(const std::vector<int> &valdices) : valDes(valdices) {

}

int Grande_Suite::calcul(const std::vector<Figure *> &figures) const {
    if(valDes.size() == 5){
        std::vector<int> sortedDes = valDes;
        std::sort(sortedDes.begin(), sortedDes.end());

        if(sortedDes[0] < sortedDes[1] && sortedDes[1] < sortedDes[2] && sortedDes[2] < sortedDes[3] && sortedDes[3] < sortedDes[4]){
            return this->gain;
        }
    }
}
