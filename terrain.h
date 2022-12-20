//
// Created by nicolas-heig on 12/12/2022.
//

#ifndef INC_07_ROBOTS_TERRAIN_H
#define INC_07_ROBOTS_TERRAIN_H


class Terrain {
public:
    /**
     *  init du terrain
     * @param largeur
     * @param hauteur
     */
    Terrain(int largeur,int hauteur);
    /**
     * retourne la largeure du terrain
     * @return largeur
     */
    int getLargeur() const;
    /**
     *  retourn la haut du terrain
     * @return hauteur
     */
    int getHauteur() const;
    /**
     *  Set la position du robot sur le terrain
     * @param id
     * @param x
     * @param y
     */
    void setPositionRobot(char id,int x,int y);
    /**
     *  controle si une case est libre
     * @param x
     * @param y
     * @return estlibre
     */
    bool estLibre(int x, int y) const;
    /**
     *  affiche le terrain
     */
    void afficheTerrain() const;
    /**
     * efface une position
     * @param x
     * @param y
     */
    void clearPosition(int x,int y);
    /**
     * retourne l'id du robot à une position.
     * @param x
     * @param y
     * @return
     */
    int getRobotId(int x, int y);




private:
    void historiqueMeurtre(int idRobotTue,int idRobotTueur);
    using Ligne = std::vector<char>;
    using vTerrain = std::vector<Ligne>;
    vTerrain terrain;
    using RobotTue = std::vector<int>;
    using vRobotTue = std::vector<RobotTue>;
            vRobotTue robotTue;
    int largeur,
        hauteur,
        ptrRobotTue;
};

#endif //INC_07_ROBOTS_TERRAIN_H
