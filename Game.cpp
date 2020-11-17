#include <iostream>
#include "Game.h"
#include "GlutApp.h"

Game::Game(){

}

void Game::drawgame(){
    frog.playerDraw();
    log.logDraw();
}

void Game::handles(unsigned char key){  //this physically handles the frog moving during the game
    if(key == 'w'){
        frog.moveUp();
        frog.redraw();  //this comes from newly created func in 
        std::cout << "Hi im moving up in Game.cpp" << std::endl;
    } else if(key == 'a'){
        frog.moveLeft();
        frog.redraw();
        std::cout << "Hi im moving Left in Game.cpp" << std::endl;
    } else if(key == 'd'){
        frog.moveRight();
        frog.redraw();
        std::cout << "Hi im moving Right in Game.cpp" << std::endl;
    }
}