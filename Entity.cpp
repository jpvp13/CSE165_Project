#include <iostream>
// #include "App.h"
#include "Entity.h"


#if defined WIN32
#include <freeglut.h>
#elif defined __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif

Entity::Entity(){
    frog.push_front(new Rect(0.0, -0.8, 0.2, 0.2, 1, 1 ,1));
    log.push_front(new Rect(0.5, -0.3, 0.3, 0.15, 0.82, 0.41 ,0.18));
}

void Entity::playerDraw(){
    frog[0]->draw();
}

void Entity::logDraw(){
log[0]->draw();
}