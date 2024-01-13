//
// Created by julie on 13/01/2024.
//
#include <iostream>
#include <cassert>
#include "../Jeu/Figures/Chance.h"

void testCalculChance() {
    Chance chance;

    std::cout << "Test Calcul Chance: ";

    // Cas où tous les dés ont des valeurs différentes
    assert(chance.calcul({1, 2, 3, 4, 5}) == 15);

    // Cas où tous les dés ont la même valeur
    assert(chance.calcul({6, 6, 6, 6, 6}) == 30);

    // Cas où les dés ont des valeurs différentes
    assert(chance.calcul({3, 2, 4, 5, 1}) == 15);

    std::cout << "PASS" << std::endl;
}
