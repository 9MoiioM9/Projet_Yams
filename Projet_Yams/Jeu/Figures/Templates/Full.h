//
// Created by julie on 10/01/2024.
//

#ifndef PROJET_YAMS_FULL_H
#define PROJET_YAMS_FULL_H


#include <algorithm>
#include "../Figure.h"

template <typename T>
class Full : public Figure {
private:
    std::vector<T> valDes;

public:
    Full(const std::vector<T>& valdices) : valDes(valdices) {}

    int calcul(const std::vector<Figure*>& figures) const override {


        if (valDes.size() == 5) {
            std::vector<T> sortedDes = valDes;
            std::sort(sortedDes.begin(), sortedDes.end());

            if ((sortedDes[0] == sortedDes[1] && sortedDes[1] == sortedDes[2] &&
                 sortedDes[3] == sortedDes[4]) || (sortedDes[0] == sortedDes[1] && sortedDes[2] == sortedDes[3] && sortedDes[3] == sortedDes[4])) {
                this->gain = 25;
            }
        }

        return gain;
    }
};


#endif //PROJET_YAMS_FULL_H
