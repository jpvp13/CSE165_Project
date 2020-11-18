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
    log[1]->draw(); //how to push new object on screen
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
