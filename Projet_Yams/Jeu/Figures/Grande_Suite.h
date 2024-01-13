//
// Created by Moi on 04/01/2024.
//

#ifndef PROJET_YAMS_GRANDE_SUITE_H
#define PROJET_YAMS_GRANDE_SUITE_H


#include "Figure.h"

class Grande_Suite : public Figure {
public :
    Grande_Suite();
    int calcul(const std::vector<int> &) const override;
};


#endif //PROJET_YAMS_GRANDE_SUITE_H
