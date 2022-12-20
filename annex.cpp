//
// Created by nicolas-heig on 12/12/2022.
//

#include <iostream>  // cout et cin
#include <limits>    // numeric_limits<streamsize>
#include <random>
#include "annex.h"

using namespace std;

void viderBuffer(){
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int saisie (const std::string message, const int MIN, const int MAX){


    const string MSG_ERREUR = "/!\\ erreur de saisie ..."s;
    int          saisie;    // ne peuvent pas être déclarés
    bool         erreur;    // ... dans la boucle

    do {
        // message et saisie
        cout << message << " [" << MIN << " - " << MAX << "] : ";
        cin >> saisie;


        // vérification
        erreur = cin.fail() or saisie < MIN or saisie > MAX;
        if (erreur) {
            cout << MSG_ERREUR << endl;
            cin.clear();
        }

        // vider buffer
        viderBuffer();

    } while(erreur);


    return saisie;

}

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