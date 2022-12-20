#include <cstdlib>   // EXIT_SUCCESS
#include <vector>
#include <algorithm>

#include "annex.h" //pour l'affichage
#include "robot.h"
#include "terrain.h"
#include "game.h"
#include <random>

using namespace std;



int main() {

    //constante pour les minmums et les maximums lors de la saisie
    const int MIN_LARGEUR = 10,
                MAX_LARGEUR = 1000,
                MIN_HAUTEUR = 10,
                MAX_HAUTEUR = 1000,
                MIN_ROBOTS = 2,
                MAX_ROBOTS = 10;

    //saisie des différentes valeurs par l'utilisateur
    int largeur = saisie("largeur", MIN_LARGEUR, MAX_LARGEUR);
    int hauteur = saisie("hauteur",MIN_HAUTEUR, MAX_HAUTEUR);
    int nbreRobot = saisie("nbre object",MIN_ROBOTS, MAX_ROBOTS);

    //création du terrain


    //création d'un vecteur de robots
   // vector<Robot> vRobots((size_t)nbreRobot, Robot(terrain));




    //vector<Robot> vRobots;
    //vRobots.resize(nbreRobot, Robot(terrain));


    Game game(nbreRobot,largeur, hauteur);







    return EXIT_SUCCESS;
}
