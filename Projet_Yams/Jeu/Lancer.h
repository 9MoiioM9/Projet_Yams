//
// Created by Moi on 10/01/2024.
//

#ifndef PROJET_YAMS_LANCER_H
#define PROJET_YAMS_LANCER_H


#include <vector>

class Lancer {
private:
    std::vector<int> dices = std::vector<int>(5);

public:
    Lancer(std::vector<int>&);
    std::vector<int> relancer(std::vector<int>&);
    void afficheDes();

};


#endif //PROJET_YAMS_LANCER_H
