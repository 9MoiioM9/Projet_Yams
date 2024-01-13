//
// Created by julie on 13/01/2024.
//


#include <iostream>
#include "../Jeu/Lancer.h"

void testLancerDes() {
    Lancer lancer;
    std::cout << "Test LancerDes: ";
    lancer.afficheDes();
}

void testRelancerAll() {
    Lancer lancer;
    std::cout << "Test RelancerAll: ";
    lancer.relanceAll();
}

void testRelancer() {
    Lancer lancer;
    std::cout << "Test Relancer: ";
    lancer.relancer();
}


