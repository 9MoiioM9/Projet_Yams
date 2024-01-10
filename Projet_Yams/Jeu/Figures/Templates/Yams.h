//
// Created by Moi on 04/01/2024.
//

#ifndef PROJET_YAMS_YAMS_H
#define PROJET_YAMS_YAMS_H


#include "../Figure.h"

template <typename T> class Yams: public Figure {
private :
    std::vector<T> valDes;
public :
    Yams(const std::vector<T>& valdices) : valDes(valdices){

    }


    int calcul(const std::vector<Figure*>& figures) const override {
        int score = 0;

        if(valDes.size() == 5 && valDes[0] == valDes[1] && valDes[0] == valDes[2]&& valDes[0] == valDes[3]&& valDes[0] == valDes[4]){
            score = 50;
        }
        return score;
    }
};


#endif //PROJET_YAMS_YAMS_H
