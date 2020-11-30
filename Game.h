#pragma once

// #include "Entity.h"
// #include "Rect.h"
// #include "TexRect.h"
#include "Player.h"
#include "Background.h"
#include "logObj.h"
#include "carObj.h"



class Game{
    Player player;
    logObj objects;
    Background background;
    carObj car;
    logObj log;
    // Player* player;



public:
    Game();

    void drawgame();

    void handles(unsigned char key, float x, float yt);

    void handleCollision(float x, float y);

    ~Game();

};