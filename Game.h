#pragma once

#include "player.h"


#if defined WIN32
#include <freeglut.h>
#elif defined __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif


struct Game{

    player frog;

public:
    Game();

    void drawgame();
    void handles(unsigned char key);

    void up();
    void left();
    void right();


};