//
// Created by Moi on 13/01/2024.
//

#include <iostream>
#include "Game.h"
#include "Lancer.h"
#include "Figures/Combinaison.h"
#include "Figures/Templates/Brelan.h"
#include "Figures/Templates/Carree.h"
#include "Figures/Templates/Full.h"
#include "Figures/Petite_Suite.h"
#include "Figures/Grande_Suite.h"
#include "Figures/Templates/Yams.h"
#include "Figures/Chance.h"

void Game::initGame() {
    std::cout << "Début de la partie de Yams !" << std::endl;
    std::cout << "Nombre de joueur qui va jouer : ";
    int nbJoueur;
    std::cin >> nbJoueur;
    for(int i=0; i<nbJoueur; i++){
        Joueur j = Joueur(i);
        joueurs.push_back(j);
    }

}

void Game::play() {
    Lancer main;
    int choice;
    for(int i=0;i<13;i++){
        for(Joueur j : joueurs){
            main = Lancer();
            for(int k=1; k<4;k++){
                std::cout << "Voulez-vous relancer ? (0 : non, 1 : oui)";
                std::cin >> choice;
                if(!choice){
                    break;
                }
                std::cout << "Relance numéro : " << k << std::endl;
                main.relancer();
            }
            j.afficheFigures();
            std::cout << "Choisir une figure à valider ou abandonner : ";
            std::cin >> choice;
            while(!j.setFeuille(choice, main.getDices())){
                std::cout << "Cette figure est déjà complétée ou votre choix n'est pas valide, veuillez en choisir une autre !" << std::endl;
                std::cin >> choice;
            }



        }
    }
}
