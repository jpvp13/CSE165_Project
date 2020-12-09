#include <iostream>
#include "carObj.h"
// #include "GlutApp.h"

//! h file has instance of frog and able to print out the coordinates as a test... need to figure out how to do collision detection cuzzzzz.... it no working

static carObj* singleton;

void bottomCarTimer(int id){
    singleton->blueCar->setX(singleton->blueCar->getX() - 0.03);
    singleton->yellowCar->setX(singleton->yellowCar->getX() + 0.03);

    if(singleton->blueCar->getX() < - 2){
        singleton->blueCar->setX(singleton->blueCar->getX() + 2.8);
    }

    if(singleton->yellowCar->getX() > 1){
        singleton->yellowCar->setX(singleton->yellowCar->getX() - 2.5);
    }
    

    singleton->redraw();
    glutTimerFunc(singleton->bottomCarInterval, bottomCarTimer, id);
}

void topCarTimer(int id){
    singleton->fireTruck->setX(singleton->fireTruck->getX() - 0.03);
    singleton->greenCar->setX(singleton->greenCar->getX() + 0.03);

    if(singleton->fireTruck->getX() < - 2){
        singleton->fireTruck->setX(singleton->fireTruck->getX() + 2.8);
    }

    if(singleton->greenCar->getX() > 1){
        singleton->greenCar->setX(singleton->greenCar->getX() - 2.5);
    }
    

    singleton->redraw();
    glutTimerFunc(singleton->topCarInterval, topCarTimer, id);
}


carObj::carObj(){
    this->x = 0;
    this->y = 0;
    this->w = 0;
    this->h = 0;

    fireTruck = new TexRect("images/fireTruck_Top.png", -0.9, 0.83, 0.3, 0.3);
    greenCar = new TexRect("images/GreenCar.png", -0.9, 0.57, 0.32, 0.32);

    blueCar = new TexRect("images/blueCar_bottom.png", 0.7, -0.23, 0.32, 0.32);
    yellowCar = new TexRect("images/YellowCar.png", -1.0, -0.52, 0.32, 0.32);

    bottomCarInterval = 50;
    topCarInterval = 50;
    interval = 50;

    singleton = this;

    topCarTimer(1);
    bottomCarTimer(2);
    
    //car make object
    //truck make object
}




void carObj::carDraw(){
    yellowCar->draw();
    greenCar->draw();
    fireTruck->draw();
    blueCar->draw();
}

double carObj::blueX(){
    return blueCar->getX();
}

double carObj::blueY(){
    return blueCar->getY();
}

double carObj::blueW(){
    return blueCar->getW();
}

double carObj::blueH(){
    return blueCar->getH();
}

double carObj::yellowX(){
    return yellowCar->getX();
}

double carObj::yellowY(){
    return yellowCar->getY();
}

double carObj::yellowW(){
    return yellowCar->getW();
}

double carObj::yellowH(){
    return yellowCar->getH();
}

double carObj::greenX(){
    return greenCar->getX();
}

double carObj::greenY(){
    return greenCar->getY();
}

double carObj::greenW(){
    return greenCar->getW();
}

double carObj::greenH(){
    return greenCar->getH();
}

double carObj::truckX(){
    return fireTruck->getX();
}

double carObj::truckY(){
    return fireTruck->getY();
}

double carObj::truckW(){
    return fireTruck->getW();
}

double carObj::truckH(){
    return fireTruck->getH();
}

bool carObj::containsYellow(float x, float y)const {
    return contains(x, y);
}
bool carObj::containsBlue(float x, float y)const {
    return contains(x, y);
}


carObj::~carObj(){
    delete yellowCar;
    delete greenCar;
    delete blueCar;
    delete fireTruck;

    std::cout << "Deleting Car Objects..." << std::endl;
}


// make collision detection here for each object, not the user... Maybe collision detection may work better on the user though...