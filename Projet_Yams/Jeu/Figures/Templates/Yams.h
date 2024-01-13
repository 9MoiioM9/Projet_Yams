//
// Created by Moi on 04/01/2024.
//

#ifndef PROJET_YAMS_YAMS_H
#define PROJET_YAMS_YAMS_H


#include "../Figure.h"

template <typename T> class Yams: public Figure {
public :
    Yams() {
        this->name = "Yams";
    }

    int calcul(const std::vector<int>& main) const override {
        if(main.size() == 5 && main[0] == main[1] && main[0] == main[2]&& main[0] == main[3]&& main[0] == main[4]){
            return 50;
        }else return 0; //TODO err
    }
};


#endif //PROJET_YAMS_YAMS_H
