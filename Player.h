#ifndef __Player__
#define __Player__
#pragma once
#include <iostream>
#include <SDL2/SDL.h>

class Player {

public:
    Player(SDL_Renderer *renderer);
    ~Player();

    void update(bool _up, bool _left, bool _down, bool _right);
    void draw();

private:
    bool running = true;
    float x, y, w, h;
    float speed = 3;
    int hMove, vMove;
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Rect playerRect;

};

#endif /* defined(__Game__) */