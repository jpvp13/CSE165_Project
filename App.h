#ifndef App_h
#define App_h

#include <deque>
#include "GlutApp.h"
#include "Rect.h"
#include "Circle.h"
#include "TexRect.h"
#include "Entity.h"
#include "Game.h"

class App: public GlutApp {

// std::vector<Shape*> shapes;
// std::deque<player*> frog;
    // std::deque<player*> player;
    Game* game;

public:
    
    App(int argc, char** argv, int width, int height, const char* title);
    
    void draw() const;
    
    void keyDown(unsigned char key, float x, float y);
    
    ~App();
};

#endif
