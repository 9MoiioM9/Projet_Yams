//
// Created by Moi on 04/01/2024.
//

#ifndef PROJET_YAMS_BRELAN_H
#define PROJET_YAMS_BRELAN_H


#include <cstdio>
#include <algorithm>
#include "../Figure.h"

template <typename T> class Brelan : public Figure {
public :
    Brelan(const std::vector<T>& valdices) {
        this->name = "Brelan";
    }


    int calcul(const std::vector<int> &main) const override {
        if(main.size() == 3 && main[0] == main[1] && main[1] == main[2]){
            return 3*main[0];
        }
        return 0; //TODO err
    }
};


#endif //PROJET_YAMS_BRELAN_H
