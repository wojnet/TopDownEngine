#include "Game.h"

Game::Game(){};

Game::~Game(){};

void Game::init(const char* title, int x, int y, int w, int h, Uint32 flags) {
    SDL_Init(SDL_INIT_EVERYTHING);

    window = SDL_CreateWindow(title, x, y, w, h, flags);
    if (NULL == window) std::cout << "Could not create window: " << SDL_GetError() << std::endl;

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (NULL == renderer) std::cout << "Could not create renderer: " << SDL_GetError() << std::endl;
};

void Game::input() {
    if (SDL_PollEvent(&event)) {
        if (SDL_QUIT == event.type) {
            running = false;
        }
    }

};

void Game::update() {
    rect.x = 64;
    rect.y = 64;
    rect.w = 64;    
    rect.h = 64;
};

void Game::draw() {
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderFillRect(renderer, &rect);

    SDL_RenderPresent(renderer);
};

void Game::clean() {
    SDL_DestroyWindow(window);
    SDL_Quit();
};


// const char* title, int xpos, int ypos, int width, int height, int flags