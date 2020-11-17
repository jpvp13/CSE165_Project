#pragma once

#include <deque>
// #include "GlutApp.h"
#include "Rect.h"




class Entity: public Rect{
    std::deque<Rect*> log;
    std::deque<Rect*> frog;
    std::deque<Rect*> car;
    std::deque<Rect*> truck;
    std::deque<Rect*> river;


public:
    Entity(); //default constructor
    void playerDraw(); //to draw the player
    void logDraw();
    void carDraw();
    void truckDraw();
    void riverDraw();

    void moveUp();
    void moveLeft();
    void moveRight();




};