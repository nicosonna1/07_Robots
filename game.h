//
// Created by nicolas-heig on 20/12/2022.
//

#ifndef INC_07_ROBOTS_GAME_H
#define INC_07_ROBOTS_GAME_H

#include "robot.h"

class Game {
public:

    friend void positionnement(int& posX, int& posY);

    Game(int nbreRobots, int largeur, int hauteur);
    bool tourJeu()

private:
    void afficheTerrain() const;
    int largeur,
        hauteur;
    std::vector<Robot> vRobots;

};


#endif //INC_07_ROBOTS_GAME_H
