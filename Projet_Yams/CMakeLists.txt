cmake_minimum_required(VERSION 3.26)
project(Projet_Yams)

set(CMAKE_CXX_STANDARD 17)

add_executable(Projet_Yams main.cpp
        Jeu/Figures/Figure.cpp
        Jeu/Figures/Figure.h
        Jeu/Figures/Templates/Brelan.h
        Jeu/Figures/Templates/Carree.h
        Jeu/Figures/Templates/Yams.h
        Jeu/Figures/Petite_Suite.cpp
        Jeu/Figures/Petite_Suite.h
        Jeu/Figures/Grande_Suite.cpp
        Jeu/Figures/Grande_Suite.h
        Jeu/Joueur.cpp
        Jeu/Joueur.h
        Jeu/Figures/Chance.cpp
        Jeu/Figures/Chance.h
        Jeu/Lancer.cpp
        Jeu/Lancer.h
        Jeu/Figures/Templates/Full.h
        Jeu/Game.cpp
        Jeu/Game.h
        Jeu/Figures/Combinaison.cpp
        Jeu/Figures/Combinaison.h
        tests/TestJoueurs.cpp
        tests/TestLancer.cpp
        tests/TestBrelan.cpp
        tests/TestYams.cpp
        tests/TestCarree.cpp
        tests/TestFull.cpp
        tests/TestGrandeSuite.cpp
        tests/TestChance.cpp
        tests/testPetiteSuite.cpp
        Jeu/Game.h
        Jeu/Game.cpp
)
