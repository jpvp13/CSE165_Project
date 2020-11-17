#pragma once

#include "Entity.h"
#include "Rect.h"


struct Game{

    Entity frog;
    Entity log;
    Entity car;
    Entity truck;
    Entity river;

public:
    Game();

    void drawgame();

    // void handles(unsigned char key, float x, float y);
    void handles(unsigned char key);

    // void up();
    // void left();
    // void right();


};