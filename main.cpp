//---------------------------------------------------------
//
// Fichier        : main.cpp
// Auteur(s)      : (C) Mariaux Ewan & Nicolas Sonnard
// Date           : 2020-12-2022
// But            :
//
// Modifications  :
// Remarque(s)    : Le soft a pas été terminé il se compile pas
//                  et il manque du code pour qu'il fonctionne
//
//---------------------------------------------------------

#include <cstdlib>   // EXIT_SUCCESS

#include "annex.h"
#include "game.h"


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

    // appel de la classe game pour lancer la partie
    Game game(nbreRobot,largeur, hauteur);







    return EXIT_SUCCESS;
}
