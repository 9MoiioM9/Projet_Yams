//
// Created by Moi on 04/01/2024.
//

#include "Figure.h"

int Figure::getNumero() {
    return this->numero;
}

int Figure::getGain() {
    return this->gain;
}

void Figure::setNumero(const int &n_numero) {
    this->numero = n_numero;
}

void Figure::setGain(const int &n_gain) {
    this->gain = n_gain;
}

std::string Figure::getName() {
    return this->name;
}

bool Figure::isComplete() {
    return this->complete;
}

void Figure::setComplete() {
    this->complete = true;
}

std::vector<int> Figure::entierEgaux(const std::vector<int> &main, int val) {
    std::vector<int> res;

    for (int v : main) {
        if (v == val) {
            res.push_back(v);
        }
    }

    return res;
}
