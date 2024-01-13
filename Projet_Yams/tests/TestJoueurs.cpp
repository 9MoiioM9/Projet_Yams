//
// Created by julie on 13/01/2024.
//

#include <iostream>
#include "../Jeu/Joueur.h"


void testCreationEtId() {
    Joueur joueur(1);
    if (joueur.getId() == 1) {
        std::cout << "Test CreationEtId: PASS" << std::endl;
    } else {
        std::cout << "Test CreationEtId: FAIL" << std::endl;
    }
}

void testScoreInitial() {
    Joueur joueur(1);
    if (joueur.getScore() == 0) {
        std::cout << "Test ScoreInitial: PASS" << std::endl;
    } else {
        std::cout << "Test ScoreInitial: FAIL" << std::endl;
    }
}

void testMiseAJourScore() {
    Joueur joueur(1);
    joueur.setScore(50);
    if (joueur.getScore() == 50) {
        std::cout << "Test MiseAJourScore: PASS" << std::endl;
    } else {
        std::cout << "Test MiseAJourScore: FAIL" << std::endl;
    }
}



