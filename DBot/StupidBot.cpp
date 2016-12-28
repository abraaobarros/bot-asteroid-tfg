#include "StupidBot.h"
#include <string>
#include <sstream>
#include <iostream>
#include <math.h>

#define PI 3.14159265

StupidBot::StupidBot()
{

}

StupidBot::~StupidBot()
{

}

void StupidBot::Process()
{
	//gameState;

	//myShip;


    gamestate->Log(std::to_string(myShip->posx));
    gamestate->Log(std::to_string(sin (myShip->ang * PI / 180.0 )));
    gamestate->Log(std::to_string(myShip->velx));

	thrust = 1.0f;
    stableX();
    shoot = 3;
}

void StupidBot::stableX()
{


    if (myShip->velx < -1) {
        sideThrustFront = 1.0f;
        sideThrustBack = 1.0f;
    }else if(myShip->velx > 1){
        sideThrustFront = - 1.0f;
        sideThrustBack = - 1.0f;
    }else{
        sideThrustFront = - myShip->velx;
        sideThrustBack = - myShip->velx;
    }
}
