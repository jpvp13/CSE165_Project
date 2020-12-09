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
    Player* player = new Player;
    logObj* log = new logObj;
    carObj* car = new carObj;
    Background* background = new Background;
    StartScreen* start = new StartScreen;
    endScreen* end;
    

    bool collisionState;
    bool startScreen;
    bool endState;
    bool showLost;
    bool stopGame;




public:
    Game();

    void drawgame();
    void drawStartScreen();
    void endScreen();

    bool stopGameReturn();

    bool endScreenState();

    bool showEnd();

    void handles(unsigned char key, float x, float y);

    bool handleTopLogCollision();

    bool handleBottomLogCollision();

    bool handleYellowCollision();

    bool handleBlueCollision();

    bool handleGreenCollision();

    bool handleTruckCollision();

    void renderText(std::string text, float x, float y, void* font , float r, float g, float b);

    ~Game();

};

#endif