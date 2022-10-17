#include "Game.h"

Game::Game();
Game::~Game();

void Game::init(const char* title, int x, int y, int w, int h, int flags) {
    SDL_Init(SDL_INIT_EVERYTHING);

    window = SDL_CreateWindow(const char* title, int x, int y, int w, int h, int flags);
    if (nullptr == window) std::cout << "Could not create window: " << SDL_GetError() << std::endl;

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (nullptr == renderer) std::cout << "Could not create renderer: " << SDL_GetError() << std::endl;
};

void Game::input() {

};

void Game::update() {

};

void Game::draw() {

};

void Game::clean() {

};


// const char* title, int xpos, int ypos, int width, int height, int flags