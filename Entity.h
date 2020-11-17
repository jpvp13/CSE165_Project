#pragma once

#include <deque>
// #include "GlutApp.h"
#include "Rect.h"




class Entity: public Rect{

    std::deque<Rect*> frog;
    std::deque<Rect*> log;

public:
    Entity(); //default constructor
    void playerDraw(); //to draw the player
    void logDraw();

    void moveUp();
    void moveLeft();
    void moveRight();




};