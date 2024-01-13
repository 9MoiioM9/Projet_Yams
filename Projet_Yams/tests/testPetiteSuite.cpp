//
// Created by julie on 13/01/2024.
//

#include <iostream>
#include <cassert>
#include "../Jeu/Figures/Petite_Suite.h"

void testCalculPetiteSuite() {
    Petite_Suite petiteSuite;

    std::cout << "Test Calcul Petite Suite: ";

    // Cas où les dés forment une petite suite
    assert(petiteSuite.calcul({1, 2, 3, 4, 6}) == 30);

    // Cas où les dés forment une petite suite dans un ordre différent
    assert(petiteSuite.calcul({2, 3, 4, 5, 6}) == 30);

    // Cas où les dés ne forment pas une petite suite
    assert(petiteSuite.calcul({1, 2, 3, 5, 6}) == 0);

    // Cas où la taille de la main n'est pas 5
    assert(petiteSuite.calcul({1, 2, 3, 4}) == 0);

    std::cout << "PASS" << std::endl;
}

