#pragma once

#include <deque>
#include "GlutApp.h"
#include "Rect.h"




class player: public Rect{

    std::deque<Rect*> frog;

public:
    player(); //default constructor
    void playerDraw(); //to draw the player

    void moveUp();
    void moveLeft();
    void moveRight();




};