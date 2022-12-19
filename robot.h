//
// Created by nicolas-heig on 12/12/2022.
//
#ifndef INC_07_ROBOTS_ROBOT_H
#define INC_07_ROBOTS_ROBOT_H

#include <string>
#include "terrain.h"
#include <iostream>

class Robot{
public:

    friend std::ostream& operator<< (std::ostream& os, const Robot& robot);

    Robot();

    Robot(const Terrain& terrain);

    Robot(const Robot&);

    void deplacement(Robot& robot, const Terrain& terrain);

    /**
     *
     * @param robot
     */
    void deplacer(const Terrain& terrain);

    void eliminerRobot();

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
