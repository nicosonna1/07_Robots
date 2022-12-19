//
// Created by nicolas-heig on 12/12/2022.
//
#ifndef INC_07_ROBOTS_ROBOT_H
#define INC_07_ROBOTS_ROBOT_H

#include <string>
#include "terrain.h"
#include <iostream>
#include <vector>

class Robot{
public:

    /** Fonction permettant d'afficher notre robot
     * __________________________________________________________
     * @param os        : opérateur de flux
     * @param robot     : robot à afficher
     * __________________________________________________________
     * @return          : retoune un flux d'affichage
     * @exception       : -
     */
    friend std::ostream& operator<< (std::ostream& os, const Robot& robot);

    /** Fonction permettant de détruie un Robot
     * __________________________________________________________
     * @param vRobots   : vecteur contenant tous les robots
     * @param robot     : robot qui va tuer le robot au même emplacement
     * @param id        : id du robot à supprimer
     * @param terrain   : terrain pour l'affichage
     * __________________________________________________________
     * @return          : -
     * @exception       : -
     */
    friend void detruireRobot(std::vector<Robot>& vRobots, Robot& robot, int id, Terrain& terrain);

    /** Constructeur par défaut de robot
     * __________________________________________________________
     * @return          : -
     * @exception       : -
     */
    Robot();

    /** Constructeur de robot
     * __________________________________________________________
     * @param terrain
     * __________________________________________________________
     * @return          : -
     * @exception       : -
     */
    Robot(Terrain& terrain);

    /**   Constructeur de copie
     * __________________________________________________________
     * @param robot     : robot passé en copie
     * __________________________________________________________
     * @return          : -
     * @exception       : -
     */
    Robot(const Robot& robot);




    /**   Opérateur d'affectation
     * __________________________________________________________
     * @param robot     : robot passé en paramètre pour l'affectation
     * __________________________________________________________
     * @return          : retourne un robot en référence
     * @exception       : -
     */
    Robot& operator=(const Robot& robot);

    //void deplacement(Robot& robot, Terrain& terrain);

    /**
     *
     * @param robot
     */

    /**   Fonction afin de déplacer le robot
    * __________________________________________________________
    * @param terrain        : terrain afin de pouvoir positioner le tableau dans ce dernier
    * __________________________________________________________
    * @return               : -
     * @exception           : -
     */
    void deplacer(Terrain& terrain);


    /**   get l'id du robot
    * __________________________________________________________
    * @return               : retourne l'id du robot
    * @exception           : -
    */
    int getId() const;


    /**   get la position en X du robot
    * __________________________________________________________
    * @return               : retour de la position X
    * @exception           : -
    */
    int getPosX() const;


    /**   get la position en Y du robot
    * __________________________________________________________
    * @return               : retour de la position Y
    * @exception           : -
    */
    int getPosY() const;


    /**
     *  Déconstructeur de la class Robot
     */
    /**   Déconstructeur de la class Robot
    * __________________________________________________________
    * @return               : -
    * @exception            : -
    */
    ~Robot();



private:
    //id du robot
    const int id;

    //Position en x en y du robot
    int posX,
        posY;

    //nombre de robot total.
    static int nbreRobots;
    //prochain Id pour un robot
    static int prochainId;
};



#endif //INC_07_ROBOTS_ROBOT_H
