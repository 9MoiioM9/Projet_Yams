//
// Created by Moi on 04/01/2024.
//

#ifndef PROJET_YAMS_CARREE_H
#define PROJET_YAMS_CARREE_H


#include "../Figure.h"

template <typename T> class Carree: public Figure {
private :
    std::vector<T> valDes;
public :
    Carree(const std::vector<T>& valdices) : valDes(valdices){

    }


    int calcul(const std::vector<Figure*>& figures) const override {
        int score = 0;

        if(valDes.size() == 4 && valDes[0] == valDes[1] && valDes[0] == valDes[2]&& valDes[0] == valDes[3]){
            score = 4*valDes[0];
        }
        return score;
    }
};


#endif //PROJET_YAMS_CARREE_H
