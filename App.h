#ifndef App_h
#define App_h

#include <deque>
#include "GlutApp.h"
#include "Rect.h"

#include "TexRect.h"
#include "Game.h"
#include "Player.h"
#include "Sprite.h"
#include "Player.h"

class App: public GlutApp {

    Game* game;  
    bool showGame ;   
    

public:
    
    App(int argc, char** argv, int width, int height, const char* title);
    
    void draw() const;
    
    void keyDown(unsigned char key, float , float );
    

    
    
    ~App();
};

#endif
