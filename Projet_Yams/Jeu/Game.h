//
// Created by Moi on 13/01/2024.
//

#ifndef PROJET_YAMS_GAME_H
#define PROJET_YAMS_GAME_H


#include <vector>
#include "Joueur.h"


class Game {
private:
    std::vector<Joueur> joueurs;
public:
    void play();
    void initGame();

};


#endif //PROJET_YAMS_GAME_H
