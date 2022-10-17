#ifndef __Game__
#define __Game__

#include <iostream>
#include <SDL2/SDL.h>

class Game {

public:
    Game();
    ~Game();

    void init(const char* title, int x, int y, int w, int h, int flags);
    void input();
    void update();
    void draw();
    void clean();

    bool isRunning() { return running; }

private:
    bool running;
    SDL_Window *window;
    SDL_Renderer *renderer;

};

#endif /* defined(__Game__) */