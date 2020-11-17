#include <iostream>
#include "Game.h"

Game::Game(){

}

void Game::drawgame(){
    objs.playerDraw();
    objs.logDraw();
}

