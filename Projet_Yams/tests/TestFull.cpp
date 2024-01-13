//
// Created by julie on 13/01/2024.
//

#include <iostream>
#include <cassert>
#include "../Jeu/Figures/Templates/Full.h"

void testCalculFull() {
    Full<int> full;

    std::cout << "Test Calcul Full: ";

    // Cas où trois dés ont la même valeur et les deux autres ont une valeur différente
    assert(full.calcul({1, 1, 1, 2, 2}) == 25);

    // Cas où les cinq dés ont la même valeur
    assert(full.calcul({3, 3, 3, 3, 3}) == 25);

    // Cas où les dés n'ont pas la combinaison requise pour un Full
    assert(full.calcul({1, 2, 3, 4, 5}) == 0);

    std::cout << "PASS" << std::endl;
}

