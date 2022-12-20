//
// Created by nicolas-heig on 20/12/2022.
//
/**
 *
 *  nous garderons la classe robot. La classe terrain sera dégagée au profit de game qui regroupera l'enssemble
 *  des instructions pour faire avancer le robot.
 *
 */
#include "game.h"
#include "robot.h"
#include "annex.h"
#include "iostream"

using namespace std;



void positionnement(int& posX, int& posY, Game game){

    //positionnement aléatoire du robot dans le terrain
    do{
        posX = nbrAleatoire(1, game.largeur - 1);
        posY = nbrAleatoire(1, game.hauteur - 1);
        //vérifie que l'emplacement est libre
    }while(terrain.estLibre(posX, posY));
}

void creerRobots(vector<Robot>& vRobots, int nbreRobot, Game game){

    int posX,
            posY;

    for(size_t i = 0; i < (size_t)nbreRobot; ++i){

        positionnement(posX, posY, game);

        vRobots.push_back(Robot((int)i,posX, posY));
        cout << vRobots[i];

    }

}


Game::Game(int nbreRobots, int largeur, int hauteur){

    this->vRobots.reserve(nbreRobots);

    this->largeur = largeur;
    this->hauteur = hauteur;

    creerRobots(nbreRobots);

}

/**
 *
 *  ici on va caller le différentes instructions de jeu.
 *  il sera appelé dans le main tant qu'il il y a plus d'un robot il retourn un vrai
 */
bool Game::tourJeu(){

}

void Game::afficheTerrain() const{
    // Affiche haut du terrain
    cout << string((size_t) this->largeur + 2, '-') << endl;

    // Affichage les lignes du terrain
    for (size_t y = 0; y < (size_t) hauteur; ++y) {
        cout << "|";
        for (size_t x = 0; x < (size_t) largeur; ++x) {
            /**
             *  TO DO
             *  foncteur pour afficher si il y a quelque chose
             */


        }
        cout << "|" << endl;
    }
    // Affiche bas du terrain
    cout << string((size_t) this->largeur + 2, '-') << endl;
}