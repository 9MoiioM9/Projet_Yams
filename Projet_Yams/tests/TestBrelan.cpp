//
// Created by julie on 13/01/2024.
//

#include "../Jeu/Figures/Templates/Brelan.h"
#include <iostream>
#include <cassert>

void testCalculBrelan() {
    Brelan<int> brelan;

    std::cout << "Test Calcul Yams: ";

    // Cas où tous les éléments sont identiques (Yams)
    assert(brelan.calcul({1, 1, 1}) == 50);

    // Cas où tous les éléments ne sont pas identiques (pas de Yams)
    assert(brelan.calcul({1,2,3}) == 0);

    std::cout << "PASS" << std::endl;
}
