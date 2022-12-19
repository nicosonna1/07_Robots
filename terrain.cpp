//
// Created by nicolas-heig on 12/12/2022.
//

/**
 *  afficher le terrain a l'utilisateur
 *
 * @param terrain
 */
#include<vector>
#include <iostream>
#include "terrain.h"

using namespace std;

/**
 *  Retourne la largeur du terrain
 * @return Largeur du terrain
 */
int Terrain::getLargeur() const {return this->largeur;}

/**
 *  retourne la hauteur du terrain
 * @return hauteur du terrain
 */
int Terrain::getHauteur() const {return this->hauteur;}


/**
 * Efface la position d'un element sur le terrain
 * @param id
 * @param x
 * @param y
 */
void Terrain::clearPosition(int x,int y){
    terrain[x][y]=' ';
}

/**
 * Set la position d'un robot sur le terrain
 * @param id
 * @param x
 * @param y
 */
void Terrain::setPositionRobot(char id,int x,int y){
    terrain[x][y]=id;
}

int Terrain::getRobotId(int x, int y) {
    return (int) terrain[x][y];
}

/**
 *  Regarde si il y a quelque chose sur la case du terrain
 * @param x
 * @param y
 * @return
 */
bool Terrain::estLibre(int x, int y) const{
    // on regarde si il y a quelque chose sur la case
    return terrain [x][y]==' ' ? true:false;

}



/**
 * Affiche le terrain
 */

void Terrain::afficheTerrain() const{
    // Affiche haut du terrain
    cout << string((size_t) this->largeur + 2, '-') << endl;

    // Affichage les lignes du terrain
    for (size_t y = 0; y < (size_t) hauteur; ++y) {
        cout << "|";
        for (size_t x = 0; x < (size_t) largeur; ++x) {
            cout << terrain[x][y];
        }
        cout << "|" << endl;
    }
    // Affiche bas du terrain
    cout << string((size_t) this->largeur + 2, '-') << endl;
}


