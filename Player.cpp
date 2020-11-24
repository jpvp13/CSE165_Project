#include <iostream>
// #include "App.h"
#include "Player.h"
#include "GlutApp.h"
#include "Rect.h"
// #include "Sprite.h"


// #if defined WIN32
// #include <freeglut.h>
// #elif defined __APPLE__
// #include <GLUT/glut.h>
// #else
// #include <GL/freeglut.h>
// #endif

static Player* singleton;

void timer(int id){
    singleton->frog->advance();
    singleton->redraw();

    if(singleton->frog->isDone()){
        singleton->frog->reset();
    }

    glutTimerFunc(singleton->interval, timer, id);
}




Player::Player(){
    // Sprite(const char* filename, int rows, int cols, float x, float y, float w, float h)

    frog = new Sprite("images/turtleSprite.png", 1,4, 0.0, -0.7, 0.3, 0.3);
    interval = 250; //since there are only 4 frames and only change 2 things between the 4
    singleton = this;
    timer(1);

    // log.push_front(new TexRect("images/lion.png",-0.5, 0.2, 0.3, 0.2));
    // // log.push_back(new Rect(-0.3, -0.4, 0.3, 0.2, 1, 0, 0)); //how to create another object

    // car.push_front(new TexRect("images/lion.png",0.5, 0.5, 0.2, 0.2));

    // truck.push_front(new TexRect("images/lion.png",0.5, 0.8, 0.2, 0.2));
    // // truck.push_back(new Rect(0.0, 0.6, 0.2, 0.2, 1, 0, 0)); //how to create another object

    // river.push_front(new TexRect("images/Water.png",-1, 0.2, 5, 0.5));       //! RIVER IS FRIENDLY

    // street.push_front(new TexRect("images/lion.png",-0.3, -0.4, 0.3, 0.2));
}

void Player::frogDraw(){
        frog->draw();
}

void Player::logDraw(){
    // log[0]->draw();
    // log[1]->draw(); //how to push new object on screen   //Update, possibly only 1 log will be drawn
}

void Player::carDraw(){
    // car[0]->draw();
}

void Player::truckDraw(){
    // truck[0]->draw();
    // truck[0]->draw();   //how to push new object on screen
}

void Player::riverDraw(){
    // river[0]->draw();
}

void Player::streetDraw(){
    // street[0]->draw();
}

void Player::grassDraw(){
    // grass[0]->draw();
}


void Player::moveUp(){
    frog->setY(frog->getY() + 0.1);
    // std::cout << "My X is " << frog[0]->getX() << " and my Y is " << frog[0]->getY() << std::endl;
}

void Player::moveLeft(){
    frog->setX(frog->getX() - 0.1);
    // std::cout << "My X is " << frog[0]->getX() << " and my Y is " << frog[0]->getY() << std::endl;
}

void Player::moveRight(){
    frog->setX(frog->getX() + 0.1);
    // std::cout << "My X is " << frog[0]->getX() << " and my Y is " << frog[0]->getY() << std::endl;
}

void Player::moveDown(){
    frog->setY(frog->getY() - 0.1);
    // std::cout << "My X is " << frog[0]->getX() << " and my Y is " << frog[0]->getY() << std::endl;
}


void Player::collisionDetection(float x, float y){

    // if((frog[0][0]->getY() >= log[0]->getY() - log[0]->getH() + 0.09) && (frog[0][0]->getY() - frog[0][0]->getH() <= log[0]->getY() - 0.09) &&   //!This is collision detection for log
    // (frog[0][0]->getX() <= log[0]->getX() + log[0]->getW() - 0.09) && (frog[0][0]->getX() + frog[0][0]->getW() >= log[0]->getX() + 0.09)){
    //     std::cout << "Oops...I hit the river" << std::endl;

    //     std::cout << "I hit at X " << frog[0][0]->getX() << " and Y " << frog[0][0]->getY() << std::endl;
    //     exit(0);
        
    // } else if((frog[0][0]->getY() >= car[0]->getY() - car[0]->getH() + 0.09) && (frog[0][0]->getY() - frog[0][0]->getH() <= car[0]->getY() - 0.09) &&    //!This is collision detection for car
    // (frog[0][0]->getX() <= car[0]->getX() + car[0]->getW() - 0.09) && (frog[0][0]->getX() + frog[0][0]->getW() >= car[0]->getX() + 0.09)){
    //     std::cout << "Oops...I hit the car" << std::endl;

    //     std::cout << "I hit at X " << frog[0][0]->getX() << " and Y " << frog[0][0]->getY() << std::endl;
    //     exit(0);
        
    // }else if((frog[0][0]->getY() >= truck[0]->getY() - truck[0]->getH() + 0.09) && (frog[0][0]->getY() - frog[0][0]->getH() <= truck[0]->getY() - 0.09) &&     //!This is collision detection for truck
    // (frog[0][0]->getX() <= truck[0]->getX() + truck[0]->getW() - 0.09) && (frog[0][0]->getX() + frog[0][0]->getW() >= truck[0]->getX() + 0.09)){
    //     std::cout << "Oops...I hit the truck" << std::endl;

    //     std::cout << "I hit at X " << frog[0][0]->getX() << " and Y " << frog[0][0]->getY() << std::endl;
    //     exit(0);
        
    // }

}