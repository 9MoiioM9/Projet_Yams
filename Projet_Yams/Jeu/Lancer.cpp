//
// Created by Moi on 10/01/2024.
//

#include <cstdlib>
#include <iostream>
#include "Lancer.h"

Lancer::Lancer(std::vector<int> &) {
    for(int d : dices){
        d = rand() % 6 + 1;
    }


}

std::vector<int> Lancer::relancer(std::vector<int> &) {
    std::cout << "Voulez-vous relancer vos dés ? Mettre 0 "
    return std::vector<int>();
}

void Lancer::afficheDes() {
    std::cout << "Voici votre main : [ ";
    for(int d : dices){
        std::cout << d << " ";
    }
    std::cout << "]" << std::endl;
}
