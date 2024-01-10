//
// Created by Moi on 04/01/2024.
//

#ifndef PROJET_YAMS_JOUEUR_H
#define PROJET_YAMS_JOUEUR_H


#include <string>
#include <vector>
#include "Figures/Figure.h"

class Joueur {
private:
    long score = 0;
    int id;
public:
    Joueur(int id);
    int getId();
    int getScore();
    void setScore(int sc);

};


#endif //PROJET_YAMS_JOUEUR_H
