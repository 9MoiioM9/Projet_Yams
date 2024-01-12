//
// Created by Moi on 04/01/2024.
//

#ifndef PROJET_YAMS_PETITE_SUITE_H
#define PROJET_YAMS_PETITE_SUITE_H


#include "Figure.h"

class Petite_Suite : public Figure {
private :
    std::vector<int> valDes;
    int gain = 30;
public :
    Petite_Suite(const std::vector<int>& valdices);
    int calcul(const std::vector<Figure*>& figures) const override;
};


#endif //PROJET_YAMS_PETITE_SUITE_H
