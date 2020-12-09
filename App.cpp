#include <iostream>
#include <deque>
#include "App.h"


App::App(int argc, char** argv, int width, int height, const char* title): GlutApp(argc, argv, width, height, title){

    game = new Game();

} 

void App::draw() const {
        
    if(showGame == false && endGame == false){
        std::cout << "showing black screen from APP" << std::endl;
        game->drawStartScreen();
        

    } else if( inGame == true) {
        // std::cout << "showing game screen from APP" << std::endl;

        game->drawgame();
        
        
    
    } else if( (showGame == true) && (game->endScreenState() == true)){
        std::cout << "showing end screen from APP" << std::endl;

        game->endScreen();  
        
    }
}

void App::keyDown(unsigned char key, float x, float y){
    if (key == 27){
        exit(0);
    }

    if( key == 'l'){
        showGame = true;
        endGame = false;
        std::cout << "changing the status to start game to start" << std::endl;
    } 

    std::cout << "just running the game" << std::endl;
    game->handles(key, x, y);
    
    inGame = true;
    


    if(key == 'y'){
        showGame = false;
        endGame = true;
        std::cout << "changing the status to start game to endScreen" << std::endl;

    }
    
}

App::~App(){   
    delete game;
    
    std::cout << "Exiting..." << std::endl;
}
