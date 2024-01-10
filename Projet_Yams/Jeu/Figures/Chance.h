//
// Created by Moi on 04/01/2024.
//

#ifndef PROJET_YAMS_CHANCE_H
#define PROJET_YAMS_CHANCE_H


#include "Figure.h"

class Chance : public Figure {
public:
    int calcul(const std::vector<Figure> &);
};


#endif //PROJET_YAMS_CHANCE_H
