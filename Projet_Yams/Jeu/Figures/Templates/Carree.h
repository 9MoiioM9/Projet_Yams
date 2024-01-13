//
// Created by Moi on 04/01/2024.
//

#ifndef PROJET_YAMS_CARREE_H
#define PROJET_YAMS_CARREE_H


#include "../Figure.h"

template <typename T> class Carree: public Figure {
public :
    Carree() {

    }

    int calcul(const std::vector<int> &main) const override {
        if(main.size() == 4 && main[0] == main[1] && main[0] == main[2]&& main[0] == main[3]){
            return 4*main[0];
        }
        return 0; //TODO Erreur
    }
};


#endif //PROJET_YAMS_CARREE_H
