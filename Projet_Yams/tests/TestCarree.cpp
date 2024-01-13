//
// Created by julie on 13/01/2024.
//

#include "../Jeu/Figures/Templates/Carree.h"
#include <iostream>
#include <cassert>

void testCalculBrelan() {
    Carree<int> carree;

    std::cout << "Test Calcul Yams: ";

    // Cas où tous les éléments sont identiques (Yams)
    assert(carree.calcul({1, 1, 1, 1}) == 50);

    // Cas où tous les éléments ne sont pas identiques (pas de Yams)
    assert(carree.calcul({1,2,3, 4}) == 0);

    std::cout << "PASS" << std::endl;
}
