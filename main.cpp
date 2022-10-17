#include <iostream>
#include <SDL2/SDL.h>
#include "Player.cpp"

const int WIDTH = 800, HEIGHT = 600;

SDL_Window *window;
SDL_Renderer *renderer;
SDL_Event windowEvent;

Player player(64, 64, 64, 64);

bool isRunning = true;

void input() {
    if (SDL_PollEvent(&windowEvent)) {
        if (SDL_QUIT == windowEvent.type) {
            isRunning = false;
        }
    }
}

void update() {
    
}

void draw() {
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
}



int main(int argc, char *argv[]) {

    SDL_Init(SDL_INIT_EVERYTHING);

    window = SDL_CreateWindow("TopDownEngine", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);
    if (nullptr == window) std::cout << "Could not create window: " << SDL_GetError() << std::endl;

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (nullptr == renderer) std::cout << "Could not create renderer: " << SDL_GetError() << std::endl;

    while (isRunning) {

        input();
        update();
        draw();

    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return EXIT_SUCCESS;
}