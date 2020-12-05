#include <iostream>
#include "Game.h"
#include "GlutApp.h"
#include <exception>
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
    
    if(key == 'w'){

        
        player.moveUp();


        // player.collisionDetection(x,y);

        

        if(log.logCollision(player.getX(),player.getY()) == true){
            std::cout << "Checking player x and y within Game.cpp ... " << player.getX() << ", " << player.getY() << std::endl;
            exit(0);
        }

        

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

        player.redraw();    //this comes from newly created func in Rec
    }
}

bool Game::handleCollision(float x, float y){

    if(log.logCollision(x, y) == true){
        std::cout << "I died!" << std::endl;
    }
    // std::cout << "I hit something :)... in Game.cpp" << std::endl;

    // exit(0);
    

}

// Game::~Game(){   
    // delete &background;
    // delete &car;
    // delete &log;

    // std::cout << "Deleting Game..." << std::endl;
// }