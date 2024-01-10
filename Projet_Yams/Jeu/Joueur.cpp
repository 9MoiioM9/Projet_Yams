//
// Created by Moi on 04/01/2024.
//

#include "Joueur.h"

Joueur::Joueur(int id) {
    this->id = id;
}

int Joueur::getId() {
    return this->id;
}

int Joueur::getScore() {
    return this->score;
}

void Joueur::setScore(int sc) {
    this->score = sc;
}
