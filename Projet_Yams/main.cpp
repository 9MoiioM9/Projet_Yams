#include <iostream>
#include "Jeu/Lancer.h"
#include "Jeu/Game.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    Game g;
    g.initGame();
    g.play();
    g.gagnant();


    return 0;
}
