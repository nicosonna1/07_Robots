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




Terrain::Terrain(int largeur, int longueur) {

    for (Ligne ligne : terrain){
        terrain[0] = '|';

    }


}
Terrain::getLargeur() return Terrain::largeur;
Terrain::gethauteur() return longueur;

Terrain::setPositionRobot(char id,int x,int y){
    terrain[x][y]=id;
}

bool Terrain::estLibre(int x, int y) const{
    return terrain [x][y]==' ' ? true:false;

}

Terrain::afficheTerrain(){
    // Affiche le bord supérieur du terrain
    cout << string((size_t) this->largeur + 2, '-') << endl;

    // Affichage des lignes du terrain
    for (size_t y = 0; y < (size_t) longueur; ++y) {
        cout << "|";
        for (size_t x = 0; x < (size_t) largeur; ++x) {
            afficherCase(Position((int) x, (int) y));
        }
        cout << "|" << endl;
    }

    // Affiche le bord inférieur du terrain
    cout << string((size_t) this->largeur + 2, '-') << endl;
}

}








/**
 *
 * @param terrain
 */

void afficherTerrain(vTerrain terrain)
{
    system("cls");
    for (Ligne ligne : terrain)
    {
        for (char j : ligne)
            cout << ' ' << j;
        cout << endl;
    }
    cout << endl;
}


