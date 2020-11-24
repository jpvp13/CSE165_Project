#include <iostream>
#include "GameObj.h"
#include "GlutApp.h"


GameObj::GameObj(){

    log = new Sprite("images/turtleSprite.png", 1, 4, 0.0, 0.1, 0.6, 0.6);
    river = new TexRect("images/Water.png", -0.3, 0.2, 0.4, 0.4);
    //car make object
    //truck make object
}

void GameObj::logDraw(){
    log->draw();
}

void GameObj::riverDraw(){
    river->draw();
}

// make collision detection here for each object, not the user... Maybe collision detection may work better on the user though...