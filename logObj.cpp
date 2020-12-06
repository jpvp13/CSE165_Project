#include <iostream>
#include "logObj.h"
#include "GlutApp.h"

#if defined WIN32
#include <freeglut.h>
#elif defined __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif


static logObj* singleton;


void logTimer(int id){
    singleton->logTop->setX(singleton->logTop->getX() - 0.03);
    singleton->logBottom->setX(singleton->logBottom->getX() + 0.03);

    if (singleton->logTop->getX() < -2){
        
        singleton->logTop->setX(singleton->logTop->getX() + 4);
    }

    if (singleton->logBottom->getX() > 1.2){
        
        singleton->logBottom->setX(singleton->logBottom->getX() - 2.7);
    }
    glutTimerFunc(singleton->interval, logTimer, id);
}

logObj::logObj(){

    logTop = new Sprite("images/Log.png", 1, 1, 0.0, 0.37, 0.55, 0.55);
    logBottom = new Sprite("images/Log.png", 1, 1, 0.0, 0.1, 0.55, 0.55);

    interval = 50;

    singleton = this;

    logTimer(3);
}

void logObj::logDraw(){
    logTop->draw();
    logBottom->draw();
}





logObj::~logObj(){
    delete logTop;
    delete logBottom;
    // delete car;

    std::cout << "Deleting Log Objects..." << std::endl;
}


bool logObj::logCollision(float x, float y){

    std::cout << "Test hit in logObj" << std::endl;

    // std::cout << "Position of log x y " << log->getX() << ", " << log->getY() << std::endl;

    std::cout << "Position of user x y " << x << ", " << y << std::endl;
    

    // if(log->getY() >= 0.5){
    //     return true;
    // }

    // if((user->getY() >= log->getY() - log->getH() + 0.09) && (user->getY() - user->getH() <= log->getY() - 0.09) &&
    // (user->getX() <= log->getX() + log->getW() - 0.09) && (user->getY() + user->getW() >= log->getX() + 0.09)){
    //     std::cout << "Oops...I hit the log" << std::endl;
    //     return true;

    // }

            //this is a test
    // if((log->getY() >= this->frog->getY() - this->frog->getH() + 0.09) && (log->getY() - log->getH() <= this->frog->getY() - 0.09) &&
    // (log->getX() <= this->frog->getX() + this->frog->getW() - 0.09) && (log->getY() + log->getW() >= this->frog->getX() + 0.09)){
    //     std::cout << "Oops...I hit the river" << std::endl;

    //     std::cout << "I hit at X " << frog->getX() << " and Y " << frog->getY() << std::endl;
    //     exit(0);
    // }


    // if((this->frog->getY() >= log->getY() - log->getH() + 0.09) && (this->frog->getY() - this->frog->getH() <= log->getY() - 0.09) &&   //!This is collision detection for log
    // (this->frog->getX() <= log->getX() + log->getW() - 0.09) && (this->frog->getX() + this->frog->getW() >= log->getX() + 0.09)){
    //     std::cout << "Oops...I hit the river" << std::endl;

    //     std::cout << "I hit at X " << frog->getX() << " and Y " << frog->getY() << std::endl;
    //     exit(0);
    // }







                //this is the orginal 
    // if((frog->getY() >= log->getY() - log->getH() + 0.09) && (frog->getY() - frog->getH() <= log->getY() - 0.09) &&   //!This is collision detection for log
    // (frog->getX() <= log->getX() + log->getW() - 0.09) && (frog->getX() + frog->getW() >= log->getX() + 0.09)){
    //     std::cout << "Oops...I hit the river" << std::endl;

    //     std::cout << "I hit at X " << frog->getX() << " and Y " << frog->getY() << std::endl;
    //     exit(0);
    // }
} 


// make collision detection here for each object, not the user... Maybe collision detection may work better on the user though...