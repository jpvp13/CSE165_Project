#include <iostream>
#include "Game.h"
#include "GlutApp.h"

Game::Game(){

}

void Game::drawgame(){
    
    Obj.logDraw();
    Obj.carDraw();
    Obj.truckDraw();
    Obj.riverDraw();
    Obj.playerDraw();  //need to print last so user shows up ontop of objects
    
}

void Game::handles(unsigned char key){  //this physically handles the frog moving during the game
    if(key == 'w'){
        Obj.moveUp();
        Obj.redraw(); //this comes from newly created func in Rect
        // frog.moveUp();
        // frog.redraw();  
        std::cout << "Hi im moving up in Game.cpp" << std::endl;
    } else if(key == 'a'){
        Obj.moveLeft();
        Obj.redraw(); //this comes from newly created func in Rect

        std::cout << "Hi im moving Left in Game.cpp" << std::endl;
    } else if(key == 'd'){
        Obj.moveRight();
        Obj.redraw(); //this comes from newly created func in Rect

        std::cout << "Hi im moving Right in Game.cpp" << std::endl;
    }
}