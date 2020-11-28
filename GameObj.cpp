#include <iostream>
#include "GameObj.h"
#include "GlutApp.h"


GameObj::GameObj(){

    log = new Sprite("images/Log.png", 1, 4, 0.0, 0.1, 0.55, 0.55);
    // car = new TexRect("images/YellowCar.png", 1.0, -0.6, 0.8, 0.8);
    //car make object
    //truck make object
}

void GameObj::logDraw(){
    log->draw();
}

void GameObj::carDraw(){
    // car->draw();
}

GameObj::~GameObj(){
    delete log;
    // delete car;

    std::cout << "Deleting Objects..." << std::endl;
}



// make collision detection here for each object, not the user... Maybe collision detection may work better on the user though...