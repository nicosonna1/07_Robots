#include <cstdlib>   // EXIT_SUCCESS
#include <iostream>  // cout et cin
#include <limits>    // numeric_limits<streamsize>
#include <vector>

#include "annex.h" //pour l'affichage
#include "robot.h"

using namespace std;



int main() {
    cout << "Hello, World!" << std::endl;

    const int MIN_LARGEUR = 10,
                MAX_LARGEUR = 1000,
                MIN_HAUTEUR = 10,
                MAX_HAUTEUR = 1000,
                MIN_ROBOTS = 2,
                MAX_ROBOTS = 10;

    int largeur = saisie("largeur", MIN_LARGEUR, MAX_LARGEUR);
    int hauteur = saisie("hauteur",MIN_HAUTEUR, MAX_HAUTEUR);
    int nbreRobot = saisie("nbre object",MIN_ROBOTS, MAX_ROBOTS);

    vector<Robot> vRobots;
    vRobots.resize(nbreRobot);

    for(size_t i = 0; i < (size_t)nbreRobot; ++i){

    }

    return EXIT_SUCCESS;
}
