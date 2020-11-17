#include <iostream>
// #include "App.h"
#include "player.h"


#if defined WIN32
#include <freeglut.h>
#elif defined __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif

player::player(){
    frog.push_front(new Rect(0.0, -0.8, 0.2, 0.2, 1, 1 ,1));
}

void player::playerDraw(){
    frog[0]->draw();
}