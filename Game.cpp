#include <iostream>
#include "Game.h"
#include "GlutApp.h"
// #include "Player.h"
// #include "GameObj.h"

Game::Game(){

}

void Game::drawgame(){
    
    // objects.truckDraw();
    background.stagnantColor();
    background.riverDraw();
    background.streetDraw();
    car.carDraw();
    log.logDraw();
    // objects.carDraw();


    player.frogDraw();  //need to print last so user shows up ontop of objects
    
    
}

void Game::handles(unsigned char key, float x, float y){  //this physically handles the frog moving during the game
    // if(this->player >= 1){
    //     std::cout << "The Y at this moment is ... " << y << std::endl;
    //     std::cout << "I hit the top edge! Exiting..." << std::endl;
    //     exit(0);
    // }
    if(key == 'w'){

        player.moveUp();

        

        // handleCollision(x,y);

        player.redraw();

        // std::cout << "Hi im moving up in Game.cpp" << std::endl;
    } else if(key == 'a'){
        
        player.moveLeft();

        // if(objects.objectCollision(x, y) == true){
        //     exit(0);
        // }     

        // handleCollision(x,y);

        player.redraw();    //this comes from newly created func in Rect

        // std::cout << "Hi im moving Left in Game.cpp" << std::endl;
    } else if(key == 'd'){
        
        player.moveRight();

        // if(objects.objectCollision(x, y)){
        //     exit(0);
        // }
        // handleCollision(x,y);
   
        player.redraw();    //this comes from newly created func in Rect
        

        // std::cout << "Hi im moving Right in Game.cpp" << std::endl;
    } else if(key == 's'){

        player.moveDown();
        

        // if(objects.objectCollision(x, y)){
        //     exit(0);
        // }
        // handleCollision(x,y);

        player.redraw();    //this comes from newly created func in Rect
    }
}

void Game::handleCollision(float x, float y){

    // objects.objectCollision(x, y);
    // std::cout << "I hit something :)... in Game.cpp" << std::endl;

    // exit(0);
    

}

Game::~Game(){   
    // delete &background;
    // delete &car;
    // delete &log;

    std::cout << "Deleting Game..." << std::endl;
}