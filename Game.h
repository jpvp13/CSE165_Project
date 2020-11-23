#pragma once

#include "Entity.h"
#include "Rect.h"


struct Game{
    Entity Obj; //only 1 instance is needed to create all my objects



public:
    Game();

    void drawgame();

    // void handles(unsigned char key, float x, float y);
    void handles(unsigned char key, float x, float yt);

    void handleCollision(float x, float y);

};