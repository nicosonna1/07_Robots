//
// Created by nicolas-heig on 12/12/2022.
//

#include <random>
#include "robot.h"

using namespace std;

int Robot::nbreRobots = 0;
int Robot::prochainId = 0;

int nbrAleatoire(int min, int max)
{
    // Utilisation de static pour le générateur permettant d'éviter
    // de le définir à chaque appel de nbrAleatoire
    static random_device rand_dev;
    static default_random_engine generator(rand_dev());
    // Distribution d'un random de manière uniforme
    uniform_int_distribution<int> distr(min, max);
    return distr(generator) ;
}

ostream& operator <<(ostream& os, const Robot& robot) {
    return os << robot.id << "(" << robot.posX << "," << robot.posY << ")"<< endl;
}



Robot::Robot() : id(Robot::prochainId){

    ++prochainId;
    ++nbreRobots;

    //posX = nbrAleatoire(largeur, longueur);

}

Robot::Robot(Terrain& terrain) : id(Robot::prochainId){
    ++prochainId;
    ++nbreRobots;

    do{
        this->posX = nbreAleatoire(1, terrain.getLargeur() - 1);
        this->posY = nbreAleatoire(1, terrain.getHauteur() - 1);

    }while(terrain.estLibre(posX, posY));

    terrain.setPositionRobot(this->id, this->posX, this->posY);

}


void Robot::deplacer(const Terrain& terrain){

    /*
    direction = 1 → la tondeuse monte
    direction = 2 → la tondeuse va vers la droite
    direction = 3 → la tondeuse descend
    direction = 4 → la tondeuse va vers la gauche
     */
    const int DEPLACEMENT_MIN = 1,
                DEPLACEMENT_MAX = 4;
    int direction = nbrAleatoire(DEPLACEMENT_MIN,DEPLACEMENT_MAX);

    //stock la position du robot afin de faire le déplacement.
    int tmpPosY = this->posY;
    int tmpPosX = this->posX;
    do {
        switch (direction) {
            case 1:
                --tmpPosY;
                break;
            case 2:
                ++tmpPosX;
                break;
            case 3:
                ++tmpPosY;
                break;
            case 4:
                --tmpPosX;
        }
        //check que le déplacement est dans les limites du terrain
    }while(tmpPosX > 0 and tmpPosX < terrain.getLargeur() and tmpPosY > 0 and tmpPosY < terrain.getHauteur());

    this->posX = tmpPosX;
    this->posY = tmpPosY;

    if(!(terrain.estLibre(this->posX, this->posY))){

    }


}



Robot::~Robot(){

    //Décrémente le nombre de robot
    --nbreRobots;
}