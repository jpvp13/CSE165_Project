#include <iostream>
#include "carObj.h"
#include "GlutApp.h"

//! h file has instance of frog and able to print out the coordinates as a test... need to figure out how to do collision detection cuzzzzz.... it no working

carObj::carObj(){

    // yellowCar = new Sprite("images/YellowCar.png", 1, 1, -0.9, -0.25, 0.8, 0.8);
    // greenCar = new Sprite("images/GreenCar.png", 1, 1, -0.9, 0.7, 0.8, 0.8);

    fireTruck = new TexRect("images/fireTruck_Top.png", -0.9, 0.93, 0.8, 0.8);
    greenCar = new TexRect("images/GreenCar.png", 0.2, 0.78, 0.7, 0.7);

    blueCar = new TexRect("images/blueCar_bottom.png", 0.5, -0.15, 0.8, 0.8);
    yellowCar = new TexRect("images/YellowCar.png", -0.9, -0.25, 0.8, 0.8);
    
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