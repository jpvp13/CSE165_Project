#pragma once

#include <vector>
#include "TexRect.h"
#include "Shape.h"
#include "Rect.h"
#include "Sprite.h"


class Player: public Rect{

    // static Player* singleton;

    Sprite* frog;

public:
    Player(); //default constructor
    void frogDraw(); //to draw the player

    friend void timer(int id);
    int interval;


    void moveUp();
    void moveLeft();
    void moveRight();
    void moveDown(); 

    void collisionDetection(float x, float y);

    friend void timer(int id);

    ~Player();

};