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

using namespace std;

using Ligne = std::vector<char>;
using vTerrain = std::vector<Ligne>;

Terrain::Terrain() {

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


