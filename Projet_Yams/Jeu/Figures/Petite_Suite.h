//
// Created by Moi on 04/01/2024.
//

#ifndef PROJET_YAMS_PETITE_SUITE_H
#define PROJET_YAMS_PETITE_SUITE_H


#include "Figure.h"

class Petite_Suite : public Figure {
public :
    Petite_Suite();
    int calcul(const std::vector<int> &) const override;
};


#endif //PROJET_YAMS_PETITE_SUITE_H
