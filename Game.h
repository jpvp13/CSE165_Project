#pragma once

#include "Rect.h"
#include "TexRect.h"
#include "Player.h"
#include "Background.h"
#include "logObj.h"
#include "carObj.h"
#include "StartScreen.h"



class Game{
    Player* player = new Player;
    logObj* log = new logObj;
    carObj* car = new carObj;
    Background* background = new Background;
    StartScreen* start = new StartScreen;
    

    bool collisionState;
    bool startScreen;
    bool show;




public:
    Game();

    void drawgame();
    void drawStartScreen();

    bool showGame();
    bool showGameFalse();

    void handles(unsigned char key, float x, float yt);

    bool handleYellowCollision(float Px, float Py);

    bool handleBlueCollision(float Px, float Py);

    bool handleGreenCollision(float Px, float Py);

    bool handleTruckCollision(float Px, float Py);

    void renderText(std::string text, float x, float y, void* font , float r, float g, float b);

    ~Game();

};