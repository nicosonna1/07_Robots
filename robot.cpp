//
// Created by nicolas-heig on 12/12/2022.
//

#include <random>
#include "robot.h"

using namespace std;

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
    return os << robot.nom << "(" << robot.posX << "," << robot.posY << ")"<< endl;
}



Robot::Robot() {



}

Robot::Robot(const std::string& nomRobot) {
    this->nom = nomRobot;
}

void Robot::position(Robot& robot){



}