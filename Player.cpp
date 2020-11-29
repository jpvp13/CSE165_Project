#include <iostream>
// #include "App.h"
#include "Player.h"
#include "GlutApp.h"
#include "GameObj.h"
// #include "Rect.h"
// #include "Sprite.h"


static Player* singleton;
GameObj* log;

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

    frog = new Sprite("images/turtleSprite.png", 1,4, 0.0, -0.8, 0.2, 0.2);
    interval = 250; //since there are only 4 frames and only change 2 things between the 4
    singleton = this;
    timer(1);

}

void Player::frogDraw(){
    frog->draw();

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

Player::~Player(){
    delete frog;

    std::cout << "Deleting Player..." << std::endl;
}


bool Player::collisionDetection(float x, float y){

    // std::cout << "The X of log is " << log->getX() << " and the Y is " << log->getY() << std::endl;

    // if((frog->getY() >= log->getY() - log->getH() + 0.09) && (frog->getY() - frog->getH() <= log->getY() - 0.09) &&
    // (frog->getX() <= log->getX() + log->getW() - 0.09) && (frog->getY() + frog->getW() >= log->getX() + 0.09)){
    //     std::cout << "Oops...I hit the log" << std::endl;

    //     std::cout << "I hit at X " << frog->getX() << " and Y " << frog->getY() << std::endl;
    // }

    // if((frog->getY() >= log->getY() - log->getH() + 0.09) && (frog->getY() - frog->getH() <= log->getY() - 0.09) &&   //!This is collision detection for log
    // (frog->getX() <= log->getX() + log->getW() - 0.09) && (frog->getX() + frog->getW() >= log->getX() + 0.09)){
    //     std::cout << "Oops...I hit the log" << std::endl;

    //     std::cout << "I hit at X " << frog->getX() << " and Y " << frog->getY() << std::endl;
    //     exit(0);
    // }
        
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