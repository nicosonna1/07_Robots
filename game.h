//---------------------------------------------------------
//
// Fichier        : game.h
// Auteur(s)      : (C) Mariaux Ewan & Nicolas Sonnard
// Date           : 2020-12-2022
// But            :
//
// Modifications  :
// Remarque(s)    : Le soft a pas été terminé il se compile pas
//                  et il manque du code pour qu'il fonctionne
//
//---------------------------------------------------------

#ifndef INC_07_ROBOTS_GAME_H
#define INC_07_ROBOTS_GAME_H

#include "robot.h"

class Game {
public:

    friend void positionnement(int& posX, int& posY);
    friend void creerRobot(Game game, int nbreRobot);
    friend void positionnement(Game game, int& posX, int& posY);
    friend void jouer(Game game);


    Game(int nbreRobots, int largeur, int hauteur);
    bool tourJeu();

    int getLargeur() const;

    int getHauteur() const;


private:
    static void afficheTerrain();
    int largeur,
        hauteur;
    std::vector<Robot> vRobots;

};


#endif //INC_07_ROBOTS_GAME_H
