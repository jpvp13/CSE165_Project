#pragma once

// #include "Entity.h"
// #include "Rect.h"
// #include "TexRect.h"
#include "Player.h"
// #include "Sprite.h"
#include "GameObj.h"



class Game{
    Player player;
    GameObj objects;
    // Player* player;



public:
    Game();

    void drawgame();

    void handles(unsigned char key, float x, float yt);

    void handleCollision(float x, float y);

};