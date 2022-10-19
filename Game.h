#ifndef __Game__
#define __Game__
#pragma once
#include <iostream>
#include <SDL2/SDL.h>

class Game {

public:
    Game();
    ~Game();

    void init(const char* title, int x, int y, int w, int h, Uint32 flags);
    void input();
    void update();
    void draw();
    void clean();

    bool isRunning() { return running; }

private:
    bool running = true;
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Event event;

    float x = 0;

};

#endif /* defined(__Game__) */