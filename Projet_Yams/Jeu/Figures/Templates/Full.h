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
        int score = 0;

        if (valDes.size() == 5) {
            // Triez les dés pour faciliter la vérification
            std::vector<T> sortedDes = valDes;
            std::sort(sortedDes.begin(), sortedDes.end());

            // Vérifiez si le Full est atteint
            if (((sortedDes[0] == sortedDes[1] && sortedDes[1] == sortedDes[2]) &&
                 (sortedDes[3] == sortedDes[4] && sortedDes[2] != sortedDes[3])) ||
                ((sortedDes[0] != sortedDes[1] && sortedDes[1] == sortedDes[2]) &&
                 (sortedDes[2] == sortedDes[3] && sortedDes[3] == sortedDes[4]))) {
                score = 25;
            }
        }

        return score;
    }
};


#endif //PROJET_YAMS_FULL_H
