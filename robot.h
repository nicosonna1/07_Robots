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
    Robot();

    friend std::ostream& operator<< (std::ostream& os, const Robot& robot);

    Robot(const std::string& nom);


    void position(Robot& robot);

    void deplacer(Robot& robot);



private:
    std::string nom;

    int posX,
        posY;
};

#endif //INC_07_ROBOTS_ROBOT_H
