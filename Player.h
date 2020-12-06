#ifndef PLAYER_H
#define PLAYER_H

#include <deque>
#include <vector>
#include "TexRect.h"
#include "Shape.h"
#include "Rect.h"
#include "Sprite.h"
#include "carObj.h"
#include "logObj.h"


class Player: public Rect{

    // logObj log;

    Sprite* turtle;

    Sprite* smoke;

    // Sprite* log;

    bool smokeVisible;
    bool turtleVisable;

    



public:
    Player(); //default constructor
    void turtleDraw(); //to draw the player

    friend void timer(int id);
    friend void smokeTimer(int id);

    unsigned int turtleInterval;
    unsigned int smokeInterval;

    void changePlayerState();

    void changeSmokeState();

    void smokeFunc(int id);

    float returnX();
    float returnY();
    float returnW();
    float returnH();

    void moveUp();
    void moveLeft();
    void moveRight();
    void moveDown(); 

    bool collisionDetection(float x, float y);

    ~Player();

};


#endif