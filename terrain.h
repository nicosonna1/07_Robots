//
// Created by nicolas-heig on 12/12/2022.
//

#ifndef INC_07_ROBOTS_TERRAIN_H
#define INC_07_ROBOTS_TERRAIN_H


class Terrain {
public:
    Terrain(int largeur,int hauteur);
    int getLargeur() const;
    int getHauteur() const;
    void setPositionRobot(char id,int x,int y);
    bool estLibre(int x, int y) const;
    void afficheTerrain() const;
    void clearPosition(int x,int y);
    int getRobotId(int x, int y);
    //void setTaille(const int x, const int y);

private:
    using Ligne = std::vector<char>;
    using vTerrain = std::vector<Ligne>;
    static vTerrain terrain;
    int largeur,
        hauteur;
};

#endif //INC_07_ROBOTS_TERRAIN_H
