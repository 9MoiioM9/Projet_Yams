//
// Created by Moi on 04/01/2024.
//

#include <algorithm>
#include "Grande_Suite.h"

Grande_Suite::Grande_Suite() {
    this->gain = 40;
}

int Grande_Suite::calcul(const std::vector<int> &main) const {
    if(main.size() == 5){
        std::vector<int> sortedDices = main;
        std::sort(sortedDices.begin(), sortedDices.end());

        if(sortedDices[0] < sortedDices[1] && sortedDices[1] < sortedDices[2] && sortedDices[2] < sortedDices[3] && sortedDices[3] < sortedDices[4]){
            return this->gain;
        }
    }
}
