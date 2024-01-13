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
        for(Joueur jou : joueurs){
            main = Lancer();
            for(int j=1; j<4;j++){
                std::cout << "Voulez-vous relancer ? (0 : non, 1 : oui)";
                std::cin >> choice;
                if(!choice){
                    break;
                }
                std::cout << "Relance numéro : " << j << std::endl;
                main.relancer();
            }
            jou.afficheFigures();
            std::cout << "Choisir une figure à valider ou abandonner : ";
            std::cin >> choice;
            while(!jou.setFeuille(choice)){
                std::cout << "Cette figure est déjà complétée ou votre choix n'est pas valide, veuillez en choisir une autre !" << std::endl;
                std::cin >> choice;
            }
            switch (choice) {
                case (1 || 2 || 3 || 4 || 5 || 6) :
                    Combinaison combi();
                    jou.setScore(combi().calcul(combi().entierEgaux(main.getDices(), choice )));
                    jou.setFeuille(choice);
                    break;
                case 7:
                    Brelan<int> brelan();
                    jou.setFeuille(7);
                    jou.setScore(brelan().calcul(brelan().entierEgaux(main.getDices(), choice )));
                    break;
                case 8:
                    Carree<int> carree();
                    jou.setFeuille(8);
                    jou.setScore(brelan().calcul(brelan().entierEgaux(main.getDices(), choice )));
                    break;
                case 9 :
                    Full<int> full();
                    jou.setFeuille(9);
                    jou.setScore(full().getGain());
                    break;
                case 10 :
                    Petite_Suite pteSuite();
                    jou.setFeuille(10);
                    jou.setScore(pteSuite().getGain());
                    break;
                case 11 :
                    Grande_Suite grdeSuite();
                    jou.setFeuille(11);
                    jou.setScore(grdeSuite().getGain());
                    break;
                case 12 :
                    Yams<int> yams();
                    jou.setFeuille(12);
                    jou.setScore(yams().getGain());
                    break;
                case 13 :
                    Chance chance();
                    jou.setFeuille(13);
                    jou.setScore(chance().calcul(main.getDices()));
                    break;

                    default:
                    std::cout << "Choix non valide." << std::endl;
                    break;
            }

        }
    }
}
