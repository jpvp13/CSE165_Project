#include <iostream>
#include "Game.h"
#include "GlutApp.h"
// #include "Player.h"
// #include "GameObjs.h"

Game::Game(){

}

void Game::drawgame(){
    // objects.carDraw();
    // objects.truckDraw();
    background.stagnantColor();
    background.riverDraw();
    background.streetDraw();
    objects.logDraw();
    // objects.carDraw();


    player.frogDraw();  //need to print last so user shows up ontop of objects
    
    
}

void Game::handles(unsigned char key, float x, float y){  //this physically handles the frog moving during the game
    if(key == 'w'){

        // Obj.collisionDetection(x, y);

        player.moveUp();
        player.redraw();

        // std::cout << "Hi im moving up in Game.cpp" << std::endl;
    } else if(key == 'a'){
        
        // player.collisionDetection(x, y);

        player.moveLeft();
        player.redraw();    //this comes from newly created func in Rect

        // std::cout << "Hi im moving Left in Game.cpp" << std::endl;
    } else if(key == 'd'){
       
        // player.collisionDetection(x, y);
   
        player.moveRight();
        player.redraw();    //this comes from newly created func in Rect
        

        // std::cout << "Hi im moving Right in Game.cpp" << std::endl;
    } else if(key == 's'){
        // player.collisionDetection(x, y);

        player.moveDown();
        player.redraw();    //this comes from newly created func in Rect
    }
}

void Game::handleCollision(float x, float y){

    // player.collisionDetection(x, y);
    // std::cout << "collsion in game.cpp" << std::endl;
    

}

// Game::~Game(){   
//     delete & background;
//     delete & objects;
    
//     std::cout << "Deleting Game..." << std::endl;
// }