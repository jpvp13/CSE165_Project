#include <iostream>
#include "GameObj.h"
#include "GlutApp.h"

//! h file has instance of frog and able to print out the coordinates as a test... need to figure out how to do collision detection cuzzzzz.... it no working

GameObj::GameObj(){

    log = new Sprite("images/Log.png", 1, 4, 0.0, 0.1, 0.55, 0.55);
    // car = new TexRect("images/YellowCar.png", 1.0, -0.6, 0.8, 0.8);
    //car make object
    //truck make object
}

void GameObj::logDraw(){
    log->draw();
    // std::cout << "The X of log is " << log->getX() << " and the Y is " << log->getY() << std::endl;

    // std::cout << "The X of log is " << frog->getX() << " and the Y is " << frog->getY() << std::endl;
}

void GameObj::carDraw(){
    // car->draw();
}



GameObj::~GameObj(){
    delete log;
    // delete car;

    std::cout << "Deleting Objects..." << std::endl;
}


bool GameObj::objectCollision(float x, float y){

    // if((frog->getY() >= log->getY() - log->getH() + 0.09) && (frog->getY() - frog->getH() <= log->getY() - 0.09) &&
    // (frog->getX() <= log->getX() + log->getW() - 0.09) && (frog->getY() + frog->getW() >= log->getX() + 0.09)){
    //     std::cout << "Oops...I hit the log" << std::endl;

    //     std::cout << "I hit at X " << frog->getX() << " and Y " << frog->getY() << std::endl;
    // }
                // this is the orginal 
    // if((frog->getY() >= log->getY() - log->getH() + 0.09) && (frog->getY() - frog->getH() <= log->getY() - 0.09) &&   //!This is collision detection for log
    // (frog->getX() <= log->getX() + log->getW() - 0.09) && (frog->getX() + frog->getW() >= log->getX() + 0.09)){
    //     std::cout << "Oops...I hit the river" << std::endl;

    //     std::cout << "I hit at X " << frog->getX() << " and Y " << frog->getY() << std::endl;
    // }
} 


// make collision detection here for each object, not the user... Maybe collision detection may work better on the user though...