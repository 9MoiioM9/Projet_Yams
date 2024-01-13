//
// Created by Moi on 04/01/2024.
//

#ifndef PROJET_YAMS_FIGURE_H
#define PROJET_YAMS_FIGURE_H


#include <vector>
#include <string>

class Figure {
protected:
    std::string name;
    int gain;
    int numero;
    bool complete = false;

public:

    virtual int calcul(const std::vector<int> &) const = 0;
    std::vector<int> entierEgaux(const std::vector<int>& main, int val);


    int getNumero();
    int getGain();
    bool isComplete();
    std::string getName();

    void setNumero(const int &);
    void setGain(const int &);
    void setComplete();
};


#endif //PROJET_YAMS_FIGURE_H
