//
// Created by julie on 10/01/2024.
//

#ifndef PROJET_YAMS_FULL_H
#define PROJET_YAMS_FULL_H


#include <algorithm>
#include "../Figure.h"

template <typename T>
class Full : public Figure {
public:

    Full(const std::vector<T> &valdices) {
        this->name = "Full";
    }


    int calcul(const std::vector<int> &main) const override {
        if (main.size() == 5) {
            std::vector<T> sortedDices = main;
            std::sort(sortedDices.begin(), sortedDices.end());

            if ((sortedDices[0] == sortedDices[1] && sortedDices[1] == sortedDices[2] &&
                 sortedDices[3] == sortedDices[4]) || (sortedDices[0] == sortedDices[1] && sortedDices[2] == sortedDices[3] && sortedDices[3] == sortedDices[4])) {
                return 25;
            }
        }else return 0;


    }
};


#endif //PROJET_YAMS_FULL_H
