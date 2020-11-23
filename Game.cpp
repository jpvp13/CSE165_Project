#include <iostream>
#include "Game.h"
#include "GlutApp.h"

Game::Game(){

}

void Game::drawgame(){
    
    
    Obj.carDraw();
    Obj.truckDraw();
    Obj.riverDraw();
    Obj.streetDraw();
    Obj.logDraw();
    Obj.playerDraw();  //need to print last so user shows up ontop of objects
    
}

void Game::handles(unsigned char key, float x, float y){  //this physically handles the frog moving during the game
    if(key == 'w'){

        Obj.collisionDetection(x, y);
        Obj.moveUp();
        Obj.redraw(); //this comes from newly created func in Rect

        // std::cout << "Hi im moving up in Game.cpp" << std::endl;
    } else if(key == 'a'){
        
        Obj.collisionDetection(x, y);
        
        Obj.moveLeft();
        Obj.redraw(); //this comes from newly created func in Rect

        // std::cout << "Hi im moving Left in Game.cpp" << std::endl;
    } else if(key == 'd'){
       

        Obj.collisionDetection(x, y);
        Obj.moveRight();
        Obj.redraw(); //this comes from newly created func in Rect
        

        // std::cout << "Hi im moving Right in Game.cpp" << std::endl;
    } else if(key == 's'){
        Obj.collisionDetection(x, y);
        Obj.moveDown();
        Obj.redraw(); //this comes from newly created func in Rect
    }
}

void Game::handleCollision(float x, float y){

    Obj.collisionDetection(x, y);
    std::cout << "collsion in game.cpp" << std::endl;
    

}