//
// Created by Moi on 10/01/2024.
//

#include <cstdlib>
#include <iostream>
#include "Lancer.h"

Lancer::Lancer() {
    for(int i =0; i<dices.size();i++){
        dices[i] = rand() % 6 + 1;
    }
    afficheDes();
}

std::vector<int> Lancer::relancer() {
    std::cout << "Voulez-vous relancer vos dés ? Si oui veuillez rentrer le nombre de dés à relancer sinon taper 0" << std::endl;
    int nbRelance;
    std::cin >> nbRelance;

    if(nbRelance){
        int choice;
        std::vector<int> new_main = this->dices;
        std::cout << "Choississez les dés à relancer (de 1 à 5) : " << std::endl;
        for(int i = 0; i<nbRelance; i++){
            std::cin >> choice;
            new_main[choice-1] = rand() % 6 + 1;
        }
        this->dices = new_main;
        afficheDes();
    }

    return this->dices;
}

void Lancer::afficheDes() {
    std::cout << "Voici votre main : [ ";
    for(int d : dices){
        std::cout << d << " ";
    }
    std::cout << "]" << std::endl;
}
