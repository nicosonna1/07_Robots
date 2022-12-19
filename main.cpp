#include <cstdlib>   // EXIT_SUCCESS
#include <iostream>  // cout et cin
#include <limits>    // numeric_limits<streamsize>
#include <vector>
#include <algorithm>
#include <numeric>

#include "annex.h" //pour l'affichage
#include "robot.h"
#include "terrain.h"
#include <random>

using namespace std;

bool trouverRobot{};

int main() {

    const int MIN_LARGEUR = 10,
                MAX_LARGEUR = 1000,
                MIN_HAUTEUR = 10,
                MAX_HAUTEUR = 1000,
                MIN_ROBOTS = 2,
                MAX_ROBOTS = 10;

    int largeur = saisie("largeur", MIN_LARGEUR, MAX_LARGEUR);
    int hauteur = saisie("hauteur",MIN_HAUTEUR, MAX_HAUTEUR);
    int nbreRobot = saisie("nbre object",MIN_ROBOTS, MAX_ROBOTS);

    Terrain terrain(largeur,hauteur);

    vector<Robot> vRobots(nbreRobot, Robot(terrain));

    //auto rng = default_random_engine {};

    vector<Robot>::iterator it;
    int id;
    int it;
    do{
        shuffle(vRobots.begin(), vRobots.end(),default_random_engine());

        for(size_t i = 0; i < vRobots.size(); ++i){
            vRobots[i].deplacer(terrain);

            if(vRobots[i].positionLibre(terrain)){
                id =;
                it = remove_if(vRobots.begin(), vRobots.end(), )

            }



        }



    } while (vRobots.size() == 1);


    //random_shuffle(vRobots.begin(), vRobots.end());


    /*
    vRobots.resize(nbreRobot)

    for(size_t i = 0; i < (size_t)nbreRobot; ++i){
        Robot robot(to_string(i));
        vRobots.push_back(robot);

        cout << vRobots[i] <<endl;
    }*/



    return EXIT_SUCCESS;
}
