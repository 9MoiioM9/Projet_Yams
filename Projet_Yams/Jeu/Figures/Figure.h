//
// Created by Moi on 04/01/2024.
//

#ifndef PROJET_YAMS_FIGURE_H
#define PROJET_YAMS_FIGURE_H


#include <vector>

class Figure {
private:
    int gain;

public:
    virtual int calcul(const std::vector<Figure*> &) const = 0;
};


#endif //PROJET_YAMS_FIGURE_H
