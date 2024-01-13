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

void Lancer::relanceAll() {
    for(int i = 0; i<dices.size(); i++){
        dices[i] = rand() % 6 + 1;
    }
    afficheDes();
}

bool Lancer::isPresent(std::vector<int> &l, int &choix) {
    for(int occurr : l){
        if(occurr == choix){
            return true;
        }
    }
    return false;
}

void Lancer::relancer() {
    std::cout << "Veuillez-rentrez le nombre de des à relancer : " << std::endl;
    std::vector<int> dejaRelance;
    int nbRelance;
    std::cin >> nbRelance;

    if(nbRelance != 5){
        int choice;
        std::vector<int> new_main = this->dices;
        std::cout << "Choississez les des à relancer (de 1 à 5) : " << std::endl;
        for(int i = 0; i<nbRelance; i++){
            std::cout << "Choix " << i+1 << " : " << std::endl;
            std::cin >> choice;
            while(isPresent(dejaRelance, choice)) {
                std::cout << "Déjà relance ! Choisir un autre des : " << std::endl;
                std::cin >> choice;
            }
            dejaRelance.push_back(choice);
            new_main[choice-1] = rand() % 6 + 1;
        }

        this->dices = new_main;
        afficheDes();
    }else relanceAll();
}

void Lancer::afficheDes() {
    std::cout << "Voici votre main : [ ";
    for(int d : dices){
        std::cout << d << " ";
    }
    std::cout << "]" << std::endl;
}

std::vector<int>& Lancer::getDices() {
    return this->dices;
}
