//
// Created by julie on 13/01/2024.
//

#include <iostream>
#include <vector>
#include <cassert>
#include "../Jeu/Figures/Grande_Suite.h"

void testCalculGrandeSuite() {
    Grande_Suite grandeSuite;

    std::cout << "Test Calcul Grande Suite: ";

    // Cas où les dés forment une grande suite
    assert(grandeSuite.calcul({1, 2, 3, 4, 5}) == 40);

    // Cas où les dés forment une grande suite dans un ordre différent
    assert(grandeSuite.calcul({2, 3, 4, 5, 6}) == 40);

    // Cas où les dés ne forment pas une grande suite
    assert(grandeSuite.calcul({1, 2, 3, 4, 6}) == 0);

    // Cas où la taille de la main n'est pas 5
    assert(grandeSuite.calcul({1, 2, 3, 4}) == 0);

    std::cout << "PASS" << std::endl;
}

