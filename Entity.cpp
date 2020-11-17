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

Entity::Entity(){
    frog.push_front(new Rect(0.0, -0.8, 0.2, 0.2, 1, 1 ,1));
    log.push_front(new Rect(0.5, -0.4, 0.3, 0.2, 0.82, 0.41 ,0.18));
    car.push_front(new Rect(0.5, 0.5, 0.2, 0.2, 0.44, 0.50, 0.56));
    truck.push_front(new Rect(0.5, 0.8, 0.2, 0.2, 0.6, 0.7, 0.66));
    river.push_front(new Rect(-1, 0.2, 5, 0.4, 0.0, 0.0, 1));
}

void Entity::playerDraw(){
    frog[0]->draw();
}

void Entity::logDraw(){
    log[0]->draw();
}

void Entity::carDraw(){
    car[0]->draw();
}

void Entity::truckDraw(){
    truck[0]->draw();
}

void Entity::riverDraw(){
    river[0]->draw();
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
