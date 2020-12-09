#include <iostream>
#include "Game.h"


#if defined WIN32
#include <freeglut.h>
#elif defined __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif

Game::Game(){
    
}

void Game::drawgame(){

    collisionState = false;
    showLost = false;
    startScreen = false;
    endState = false;
    stopGame = false;

    

    background->stagnantColor();
    background->riverDraw();
    background->streetDraw();
    background->gameArea();
    car->carDraw();
    log->logDraw();

    player->turtleDraw();     //need to print last so user shows up ontop of objects

    renderText("Starting Area", -0.2, -0.93,GLUT_BITMAP_TIMES_ROMAN_24, 0, 0, 0);
    renderText("Goal!", -0.02, 0.89, GLUT_BITMAP_TIMES_ROMAN_24, 0, 0, 0);

    

}

void Game::drawStartScreen(){

    start->screenDraw();

    startScreen = true;
}

void Game::endScreen(){
    
    end->endScreenDraw();

    endState = true;

        // endScreenState();

}

bool Game::endScreenState(){
    return endState;
}

bool Game::showEnd(){
    return showLost;
}

bool Game::stopGameReturn(){
    return stopGame;
}

void Game::handles(unsigned char key, float x, float y){  //this physically handles the frog moving during the game
    
    if( startScreen == false) {
        if(player->returnX() >= -1.0 && player->returnX() < 1.0){
            // if(player->returnY() >= -1){

                switch(key){

                    case 'w':
                        
                                

                        player->moveUp();

                        if(handleYellowCollision() == true || handleBlueCollision() == true || 
                            handleGreenCollision() == true || handleTruckCollision() == true ||
                            handleTopLogCollision() == true || handleBottomLogCollision() == true){
                            std::cout << "I DIED AHHH" << std::endl;

                            endState = true;
                           
                        }

                        

                        std::cout << "value of X from Game.cpp moveUp : " << player->returnX() << std::endl;
                        std::cout << "value of Y from Game.cpp moveUp : " << player->returnY() << std::endl;


                        
                        player->redraw();
                        // }
                        break;

                    case 'a':

                        player->moveLeft();

                        if(handleYellowCollision() == true || handleBlueCollision() == true || 
                            handleGreenCollision() == true || handleTruckCollision() == true ||
                            handleTopLogCollision() == true || handleBottomLogCollision() == true){
                            std::cout << "I DIED AHHH" << std::endl;

                            endState = true;
                           
                        }
                        std::cout << "value of X from Game.cpp moveLeft : " << player->returnX() << std::endl;

                        player->redraw(); //this comes from newly created func in Rect
                        // }
                        break;

                    case 'd':

                        player->moveRight();

                        if(handleYellowCollision() == true || handleBlueCollision() == true || 
                            handleGreenCollision() == true || handleTruckCollision() == true ||
                            handleTopLogCollision() == true || handleBottomLogCollision() == true){
                            std::cout << "I DIED AHHH" << std::endl;

                            endState = true;
                           
                        }

                        std::cout << "value of X from Game.cpp moveRight : " << player->returnX() << std::endl;

                        player->redraw();    //this comes from newly created func in Rect
                        // }
                        break;

                    case 's':

                        player->moveDown();

                        if(handleYellowCollision() == true || handleBlueCollision() == true || 
                            handleGreenCollision() == true || handleTruckCollision() == true ||
                            handleTopLogCollision() == true || handleBottomLogCollision() == true){
                            std::cout << "I DIED AHHH" << std::endl;

                            endState = true;
                           
                        }
                        std::cout << "value of X from Game.cpp moveDown : " << player->returnX() << std::endl;

                        player->redraw();   //this comes from newly created func in Rec
                        // }
                        break;
                }
            // }
        }
    }
}


bool Game::handleYellowCollision(){

    if( (player->returnY() >= car->yellowY() - car->yellowH() + 0.05 ) && (player->returnY() - player->returnH() <= car->yellowY() - 0.05) && 
        (player->returnX() <= car->yellowX() + car->yellowW() + 0.05 ) && (player->returnX() + player->returnW() >= car->yellowX() - 0.05) ){
            std::cout << "Yellow Car Hit" << std::endl;
            

            return true;
        }
    else {
        return false;
    }
}


bool Game::handleBlueCollision(){

    if( (player->returnY() >= car->blueY() - car->blueH() + 0.05  ) && (player->returnY() - player->returnH() <= car->blueY() - 0.05) && 
        (player->returnX() <= car->blueX() + car->blueW() + 0.05  ) && (player->returnX() + player->returnW() >= car->blueX() - 0.05) ){
            std::cout << "Blue Car Hit" << std::endl;
        

            return true;
        }
    else {
        return false;
    }
}

bool Game::handleGreenCollision(){
    
    if( (player->returnY() >= car->greenY() - car->greenH() + 0.05  ) && (player->returnY() - player->returnH() <= car->greenY() - 0.05) && 
        (player->returnX() <= car->greenX() + car->greenW() + 0.05  ) && (player->returnX() + player->returnW() >= car->greenX() - 0.05) ){
            std::cout << "green Car Hit" << std::endl;
            

            return true;
        }
    else {
        return false;
    }
}




bool Game::handleTruckCollision(){
    
    if( (player->returnY() >= car->truckY() - car->truckH() + 0.05  ) && (player->returnY() - player->returnH() <= car->truckY() - 0.05) && 
        (player->returnX() <= car->truckX() + car->truckW() + 0.05  ) && (player->returnX() + player->returnW() >= car->truckX() - 0.05) ){
            std::cout << "truck Hit" << std::endl;
            


            return true;
        }
    else {
        return false;
    }
}

Game::~Game(){   
    delete player;
    delete car;
    delete log;
    delete background;

    std::cout << "Deleting Game..." << std::endl;
}

bool Game::handleBottomLogCollision(){

    if( (player->returnY() >= log->logBottomY() - log->logBottomH() + 0.05  ) && (player->returnY() - player->returnH() <= log->logBottomY() - 0.05) && 
        (player->returnX() <= log->logBottomX() + log->logBottomW() + 0.05  ) && (player->returnX() + player->returnW() >= log->logBottomX() - 0.05) ){
            std::cout << "Bottom log Hit" << std::endl;
            


            return true;
        }
    else {
        return false;
    }

}


bool Game::handleTopLogCollision(){
    if( (player->returnY() >= log->logTopY() - log->logTopH() - 0.05  ) && (player->returnY() - player->returnH() <= log->logTopY() + 0.01) && 
        (player->returnX() <= log->logTopX() + log->logTopW() - 0.05  ) && (player->returnX() + player->returnW() >= log->logTopX() + 0.01) ){
            std::cout << "Top Log Hit" << std::endl;
            


            return true;
        }
    else {
        return false;
    }
}



void Game::renderText(std::string text, float x, float y, void* font = GLUT_BITMAP_HELVETICA_18, float r = 1, float g = 1, float b = 1){
    glColor3f(r, g, b);
    float offset = 0;
    for (int i = 0; i < text.length(); i++) {
        glRasterPos2f(x+offset, y);
        glutBitmapCharacter(font, text[i]);
        int w = glutBitmapWidth(font, text[i]);
        offset += ((float)w / 600)*2;
    }
}