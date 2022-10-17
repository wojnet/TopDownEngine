#ifndef Player_hpp
#define Player_hpp

#include <iostream>
#include <SDL2/SDL.h>

class Player {

public:
    Player(float _x, float _y, int _w, int _h);
    ~Player();

    void update();
    void draw();

private:
    SDL_Renderer *renderer;

};

#endif /* Player_hpp */