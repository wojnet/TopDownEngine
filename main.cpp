#include <iostream>
#include <SDL2/SDL.h>
// #include "Game.cpp"

const int WIDTH = 800, HEIGHT = 600;

SDL_Window *window;
SDL_Renderer *renderer;
SDL_Event windowEvent;

bool isRunning = true;

// void input() {
//     if (SDL_PollEvent(&windowEvent)) {
//         if (SDL_QUIT == windowEvent.type) {
//             isRunning = false;
//         }
//     }
// }

// void update() {
    
// }

// void draw() {
//     SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
//     SDL_RenderClear(renderer);
//     SDL_RenderPresent(renderer);
// }

game* = new Game();

int main(int argc, char *argv[]) {

    game->init("Game", 0, 0, 800, 600, 0);

    while (isRunning) {

        // input();
        // update();
        // draw();

    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return EXIT_SUCCESS;
}