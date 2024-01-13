//
// Created by Moi on 13/01/2024.
//

#ifndef PROJET_YAMS_COMBINAISON_H
#define PROJET_YAMS_COMBINAISON_H


#include "Figure.h"

class Combinaison : public Figure{
public:
    Combinaison(const int &);
    int calcul(const std::vector<int> &) const override;
    int calcule(const std::vector<int> &, int &);
};


#endif //PROJET_YAMS_COMBINAISON_H
