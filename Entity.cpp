#include <iostream>
// #include "App.h"
#include "Entity.h"
#include "GlutApp.h"


#if defined WIN32
#include <freeglut.h>
#elif defined __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif


//! once i am happy that all objects work correctly and that there is a collision detection then
//! I can subsitute Rect with TexRect to give all these objects textures

Entity::Entity(){
    frog.push_front(new Rect(0.0, -0.8, 0.2, 0.2, 1, 1 ,1));
    
    
    log.push_front(new Rect(0.5, -0.4, 0.3, 0.2, 0.82, 0.41 ,0.18));
    log.push_back(new Rect(-0.3, -0.4, 0.3, 0.2, 1, 0, 0)); //how to create another object

    car.push_front(new Rect(0.5, 0.5, 0.2, 0.2, 0.44, 0.50, 0.56));

    truck.push_front(new Rect(0.5, 0.8, 0.2, 0.2, 0.6, 0.7, 0.66));
    truck.push_back(new Rect(0.0, 0.6, 0.2, 0.2, 1, 0, 0)); //how to create another object

    river.push_front(new Rect(-1, 0.2, 5, 0.4, 0.0, 0.0, 1));

    street.push_front(new Rect(-0.3, -0.4, 0.3, 0.2, 1, 0, 0));
}

void Entity::playerDraw(){
    frog[0]->draw();
}

void Entity::logDraw(){
    log[0]->draw();
    // log[1]->draw(); //how to push new object on screen   //Update, possibly only 1 log will be drawn
}

void Entity::carDraw(){
    car[0]->draw();
}

void Entity::truckDraw(){
    truck[1]->draw();
    truck[0]->draw();   //how to push new object on screen
}

void Entity::riverDraw(){
    river[0]->draw();
}

void Entity::streetDraw(){
    street[0]->draw();
}

void Entity::grassDraw(){
    grass[0]->draw();
}


void Entity::moveUp(){
    frog[0]->setY(frog[0]->getY() + 0.1);
}

void Entity::moveLeft(){
    frog[0]->setX(frog[0]->getX() - 0.1);
}

void Entity::moveRight(){
    frog[0]->setX(frog[0]->getX() + 0.1);
}

bool Entity::collisionDetection(float x, float y){

  if(frog[0]->getY() >= log[0]->getY() - log[0]->getH() && (frog[0]->getY() - frog[0]->getH() <= log[0]->getY() + 0.01) && 
    (frog[0]->getX() <= log[0]->getX() + log[0]->getW()) && (frog[0]->getX() + frog[0]->getW() >= log[0]->getX() + 0.01)){
        std::cout << "Oops...I hit the 1st log" << std::endl;
        exit(0);
        
    }
    else if (frog[0]->getY() >= log[1]->getY() - log[1]->getH() && (frog[0]->getY() - frog[1]->getH() <= log[0]->getY() + 0.01) && 
    (frog[0]->getX() <= log[1]->getX() + log[1]->getW()) && (frog[0]->getX() + frog[0]->getW() >= log[1]->getX() + 0.01)){
        std::cout << "Oops.. I hit the 2nd log" << std::endl;
        exit(0);
    }

    // } else if(frog[0]->getY() >= river[0]->getY() - river[0]->getH() && (frog[0]->getY() - frog[1]->getH() <= river[0]->getY() + 0.01) && 
    // (frog[0]->getX() <= river[0]->getX() + river[0]->getW()) && (frog[0]->getX() + frog[0]->getW() >= river[0]->getX() + 0.01)){
    //     std::cout << "Oops.. I hit the river" << std::endl;
    //     exit(0);
    // }
    
}
