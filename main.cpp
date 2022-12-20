#include <cstdlib>   // EXIT_SUCCESS
#include <vector>
#include <algorithm>

#include "annex.h" //pour l'affichage
#include "robot.h"
#include "terrain.h"
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
    Terrain terrain(largeur,hauteur);

    //création d'un vecteur de robots
   // vector<Robot> vRobots((size_t)nbreRobot, Robot(terrain));

   vector<Robot> vRobots;

   vRobots.reserve(nbreRobot);

   creerRobots(vRobots, terrain,nbreRobot);
    //vector<Robot> vRobots;
    //vRobots.resize(nbreRobot, Robot(terrain));



    // id du robot à supprimer
    int id;
    do{
        //tri aléatoire des robots dans le vecteur
        shuffle(vRobots.begin(), vRobots.end(),default_random_engine());

        for(size_t i = 0; i < vRobots.size(); ++i){
            //déplace le robot
            vRobots[i].deplacer(terrain);

            //si l'emplacement n'est pas libre on détruit l'ancien robot
            if(!(terrain.estLibre(vRobots[i].getPosX(), vRobots[i].getPosY())))
            {
                //le robot qui est déplacé n'est pas encore affiché
                //c'est donc le robot qui était avant à cet emplacement qui est retourné
                id = terrain.getRobotId(vRobots[i].getPosX(), vRobots[i].getPosY());
                //détruire le robot à la nouvelle position de vRobots[i]
                detruireRobot(vRobots, vRobots[i], id, terrain);
            }

            //affichage du robot à son nouvel emplacement
            terrain.setPositionRobot((char)vRobots[i].getId(), vRobots[i].getPosX(), vRobots[i].getPosY());
        }
        terrain.afficheTerrain();
        //on s'arrête dès qu'il reste 1 robot
    } while (vRobots.size() != 1);





    return EXIT_SUCCESS;
}
