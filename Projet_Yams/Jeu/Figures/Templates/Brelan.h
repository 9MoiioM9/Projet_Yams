//
// Created by Moi on 04/01/2024.
//

#ifndef PROJET_YAMS_BRELAN_H
#define PROJET_YAMS_BRELAN_H


#include <cstdio>
#include "../Figure.h"

template <typename T> class Brelan : public Figure {
private :
    std::vector<T> valDes;
public :
    Brelan(const std::vector<T>& valdices) : valDes(valdices){

}


int calcul(const std::vector<Figure*>& figures) const override {
    int score = 0;

    if(valDes.size() == 3 && valDes[0] == valDes[1] && valDes[1] == valDes[2]){
        score = 3*valDes[0];
    }
    return score;
}
};


#endif //PROJET_YAMS_BRELAN_H
