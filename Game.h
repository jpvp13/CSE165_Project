#ifndef GAME_H
#define GAME_H

#include "GlutApp.h"
#include "Rect.h"
#include "TexRect.h"
#include "Player.h"
#include "Background.h"
#include "logObj.h"
#include "carObj.h"
#include "StartScreen.h"
#include "endScreen.h"



class Game{
    Player* player;
    logObj* log;
    carObj* car;
    Background* background;
    StartScreen* start; 
    
    bool repeat;
    bool startScreen;
    bool drawwin;
    bool drawlose;
    bool startMoving;




public:
    Game();

    void drawgame();

    void drawStartScreen();

    void drawEndLost();

    void drawEndWin();

    bool handleWinArea();

    bool handleTopLogCollision();

    bool handleBottomLogCollision();

    bool handleYellowCollision();

    bool handleBlueCollision();

    bool handleGreenCollision();

    bool handleTruckCollision();

    void renderText(std::string text, float x, float y, void* font , float r, float g, float b);

    // void resetPlayer();

    void handles(unsigned char key, float x, float y);

    ~Game();

};

#endif