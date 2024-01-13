//
// Created by Moi on 04/01/2024.
//

#ifndef PROJET_YAMS_FIGURE_H
#define PROJET_YAMS_FIGURE_H


#include <vector>

class Figure {
protected:
    int gain;
    int numero;

public:
    virtual int calcul(const std::vector<int> & main) const = 0;
    int getNumero();
    int getGain();
    void setNumero(const int &);
    void setGain(const int &);
};


#endif //PROJET_YAMS_FIGURE_H
