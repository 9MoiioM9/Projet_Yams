//
// Created by Moi on 04/01/2024.
//

#include <iostream>
#include "Joueur.h"
#include "Figures/Combinaison.h"
#include "Figures/Templates/Brelan.h"
#include "Figures/Templates/Carree.h"
#include "Figures/Templates/Full.h"
#include "Figures/Petite_Suite.h"
#include "Figures/Grande_Suite.h"
#include "Figures/Templates/Yams.h"
#include "Figures/Chance.h"


Joueur::Joueur(int id) {
    this->id = id;

    //Ajout de toutes les Figures dans la feuille du Joueurs
    Combinaison un = Combinaison(1);
    Combinaison deux = Combinaison(2);
    Combinaison trois = Combinaison(3);
    Combinaison quatre = Combinaison(4);
    Combinaison cinq = Combinaison(5);
    Combinaison six = Combinaison(6);
    Brelan brelan = Brelan<int>();
    Carree carree = Carree<int>();
    Full full = Full<int>();
    Petite_Suite petite_suite = Petite_Suite();
    Grande_Suite grande_suite = Grande_Suite();
    Yams yams = Yams<int>() ;
    Chance chance = Chance();

    feuille.push_back(&un);
    feuille.push_back(&deux);
    feuille.push_back(&trois);
    feuille.push_back(&quatre);
    feuille.push_back(&cinq);
    feuille.push_back(&six);
    feuille.push_back(&brelan);
    feuille.push_back(&carree);
    feuille.push_back(&full);
    feuille.push_back(&petite_suite);
    feuille.push_back(&grande_suite);
    feuille.push_back(&yams);
    feuille.push_back(&chance);

}

int Joueur::getId() {
    return this->id;
}

int Joueur::getScore() {
    return this->score;
}

void Joueur::setScore(int sc) {
    this->score += sc;
}

void Joueur::afficheFigures() {
    std::cout << "Voici votre feuille de jeu : " << std::endl;

    for(int i=0; i<feuille.size();i++){
        std::cout << i+1 << " : " << feuille[i]->getName() << ", completer : " << feuille[i]->isComplete() << std::endl;
    }
}

bool Joueur::setFeuille(const int &choice, std::vector<int> &main) {
    for(int i=0; i<feuille.size();i++){
        if(choice == feuille[i]->getNumero()){
            if(feuille[i]->isComplete()){
                return false;
            }
            feuille[i]->setComplete();
            std::cout << "Votre choix : " << feuille[i]->getName() << " a bien été validé !" << std::endl;

            if(1<= choice && choice <= 6){
                setScore(feuille[i]->calcule(main, choice));
            }else setScore(feuille[i]->calcul(main));

            return true;
        }
    }
    std::cout << "Votre choix ne fait pas partie des options de figures ..." << std::endl;
    return false;
}
