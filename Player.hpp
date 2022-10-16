#ifndef Player_hpp
#define Player_hpp

#include <iostream>
#include <SDL2/SDL.h>

class Player {

public:
    Player();
    ~Player();

    void update();
    void draw();

private:
    SDL_Renderer *renderer;

};

#endif /* Player_hpp */