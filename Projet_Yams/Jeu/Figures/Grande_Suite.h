//
// Created by Moi on 04/01/2024.
//

#ifndef PROJET_YAMS_GRANDE_SUITE_H
#define PROJET_YAMS_GRANDE_SUITE_H


#include "Figure.h"

class Grande_Suite : public Figure {
private :
    std::vector<int> valDes;
    int gain = 40;
public :
    Grande_Suite(const std::vector<int>& valdices);
    int calcul(const std::vector<Figure*>& figures) const override;
};


#endif //PROJET_YAMS_GRANDE_SUITE_H
