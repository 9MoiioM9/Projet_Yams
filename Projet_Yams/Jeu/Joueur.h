//
// Created by Moi on 04/01/2024.
//

#ifndef PROJET_YAMS_JOUEUR_H
#define PROJET_YAMS_JOUEUR_H


#include <string>
#include <vector>
#include "Figures/Figure.h"
#include "Lancer.h"

class Joueur {
private:

    size_t score = 0;
    size_t id;
    std::vector<Figure*> feuille;


public:
    Joueur(int id);
    int getId();
    int getScore();
    void setScore(int sc);
    void afficheFigures();
    bool setFeuille(const int &, std::vector<int> &);
    void addScore(const int &, Lancer &);
};


#endif //PROJET_YAMS_JOUEUR_H
