//
// Created by julie on 13/01/2024.
//

#include <iostream>
#include <cassert>
#include "../Jeu/Figures/Templates/Yams.h"

void testCalculYams() {
    Yams<int> yams;

    std::cout << "Test Calcul Yams: ";

    // Cas où tous les éléments sont identiques (Yams)
    assert(yams.calcul({1, 1, 1, 1, 1}) == 50);

    // Cas où tous les éléments ne sont pas identiques (pas de Yams)
    assert(yams.calcul({1, 2, 3, 4, 5}) == 0);

    std::cout << "PASS" << std::endl;
}
