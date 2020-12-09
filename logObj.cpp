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
    
    logTop = new Sprite("images/Log.png", 1, 1, 0.0, 0.23, 0.6, 0.2);
    logBottom = new Sprite("images/Log.png", 1, 1, 0.0, -0.05, 0.6, 0.2);

    interval = 50;

    singleton = this;

    logTimer(3);
}

void logObj::logDraw(){
    logTop->draw();
    logBottom->draw();
}

double logObj::logTopX(){
    return logTop->getX();
}

double logObj::logTopY(){
    return logTop->getY();
}

double logObj::logTopW(){
    return logTop->getW();
    
}

double logObj::logTopH(){
    return logTop->getH();
}

double logObj::logBottomX(){
    return logBottom->getX();
}

double logObj::logBottomY(){
    return logBottom->getY();
}

double logObj::logBottomW(){
    return logBottom->getW();
}

double logObj::logBottomH(){
    return logBottom->getH();
}



logObj::~logObj(){
    delete logTop;
    delete logBottom;
    // delete car;

    std::cout << "Deleting Log Objects..." << std::endl;
}




