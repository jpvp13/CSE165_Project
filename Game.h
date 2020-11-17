#pragma once

#include "Entity.h"
#include "Rect.h"


#if defined WIN32
#include <freeglut.h>
#elif defined __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif


struct Game{

    Entity frog;
    Entity log;

public:
    Game();

    void drawgame();

    // void handles(unsigned char key, float x, float y);
    void handles(unsigned char key);

    // void up();
    // void left();
    // void right();


};