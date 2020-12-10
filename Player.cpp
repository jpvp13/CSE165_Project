#include <iostream>
#include "Player.h"


#if defined WIN32
#include <freeglut.h>
#elif defined __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif



static Player* singleton;


void timer(int id){
    singleton->turtle->advance();
    singleton->redraw();

    if(singleton->turtle->isDone()){
        singleton->turtle->reset();
    }

    glutTimerFunc(singleton->turtleInterval, timer, id);
}

void smokeTimer(int id){
    // singleton->smoke->advance();
    // singleton->redraw();

    // if(singleton->smoke->isDone()){
    //     singleton->smokeVisible = false;    
    // }
    // glutTimerFunc(singleton->smokeInterval, smokeTimer, id);
       // // glutTimerFunc(17, smokeTimer, id);

}

// void Player::smokeFunc(int id){
//     return smokeTimer(id);
// }


Player::Player(){
    // Sprite(const char* filename, int rows, int cols, float x, float y, float w, float h)

    turtle = new Sprite("images/turtleSprite.png", 1,4, 0.8, -0.8, 0.15, 0.15);
    // smoke = new Sprite("images/Smoke.png",1, 5, 0.0, -0.8, 0.6,0.6);
    

    turtleInterval = 250; //since there are only 4 frames and only change 2 things between the 4
    // smokeInterval = 100;
    singleton = this;

    // smokeVisible = false;
    turtleVisable = true;
    timer(1);
    smokeTimer(2);

}

void Player::turtleDraw(){

    // if(smokeVisible == true){   //will show the smoke on death screen
    //     smoke->draw(0.5);
    // }

    if(turtleVisable == true){  //will draw the turtle when state is "alive"
        turtle->draw();
    } 
}

// void Player::changePlayerState(){
//     turtleVisable = false;
// }

// void Player::changeSmokeState(){
//     smokeVisible = true;
// }

    

void Player::moveUp(){
    turtle->setY(turtle->getY() + 0.09);
    // std::cout << "FROM PLAYER.CPP - My X is " << turtle->getX() << " and my Y is " << turtle->getY() << std::endl;
}

void Player::moveLeft(){
    turtle->setX(turtle->getX() - 0.09);
    // std::cout << "My X is " << turtle[0]->getX() << " and my Y is " << turtle[0]->getY() << std::endl;
}

void Player::moveRight(){
    turtle->setX(turtle->getX() + 0.09);
    // std::cout << "My X is " << turtle[0]->getX() << " and my Y is " << turtle[0]->getY() << std::endl;
}

void Player::moveDown(){
    turtle->setY(turtle->getY() - 0.09);
    // std::cout << "My X is " << turtle[0]->getX() << " and my Y is " << turtle[0]->getY() << std::endl;
}

Player::~Player(){
    delete turtle;
    // delete smoke;

    std::cout << "Deleting Player..." << std::endl;
}

float Player::returnX(){
    return turtle->getX();
}

float Player::returnY(){
    return turtle->getY();
}

float Player::returnW(){
    return turtle->getW();
}

float Player::returnH(){
    return turtle->getH();
}