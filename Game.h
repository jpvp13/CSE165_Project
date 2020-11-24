#pragma once

#include "Entity.h"
#include "Rect.h"
#include "TexRect.h"
#include "Player.h"
#include "Sprite.h"
// #include "Sprite.h"


class Game{
    Entity Obj; //only 1 instance is needed to create all my objects
    Player player;
    // Player* player;



public:
    Game();

    void drawgame();

    // void handles(unsigned char key, float x, float y);
    void handles(unsigned char key, float x, float yt);

    void handleCollision(float x, float y);

};