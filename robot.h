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

    friend std::ostream& operator<< (std::ostream& os, const Robot& robot);
    friend void detruireRobot(std::vector<Robot>& vRobots, int id);

    Robot();

    Robot(Terrain& terrain);

    //Constructeur de copie
    Robot(const Robot& robot);

    //Opérateur d'affectation
    Robot& operator=(const Robot& robot);

    //void deplacement(Robot& robot, Terrain& terrain);

    /**
     *
     * @param robot
     */
    void deplacer(Terrain& terrain);

    void eliminerRobot();


    bool positionLibre(const Terrain& terrain);

    int getId() const;


    /**
     *  Déconstructeur de la class Robot
     */
    ~Robot();



private:
    const int id;

    int posX,
        posY;

    static int nbreRobots;
    static int prochainId;
};



#endif //INC_07_ROBOTS_ROBOT_H
