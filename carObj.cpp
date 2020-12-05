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

    fireTruck = new TexRect("images/fireTruck_Top.png", -0.9, 1.1, 0.8, 0.8);
    greenCar = new TexRect("images/GreenCar.png", -0.9, 0.78, 0.7, 0.7);

    blueCar = new TexRect("images/blueCar_bottom.png", 0.7, 0.0, 0.8, 0.8);
    yellowCar = new TexRect("images/YellowCar.png", -0.9, -0.25, 0.8, 0.8);

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



carObj::~carObj(){
    delete yellowCar;
    delete greenCar;
    delete blueCar;
    delete fireTruck;

    std::cout << "Deleting Car Objects..." << std::endl;
}


// bool GameObj::objectCollision(float x, float y){

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
// } 


// make collision detection here for each object, not the user... Maybe collision detection may work better on the user though...