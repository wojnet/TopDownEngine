#include "Game.h"
#include "Player.h"

Player *player = 0;
bool up, left, down, right = false;

Game::Game(){};

Game::~Game(){};

void Game::init(const char* title, int x, int y, int w, int h, Uint32 flags) {
    SDL_Init(SDL_INIT_EVERYTHING);

    window = SDL_CreateWindow(title, x, y, w, h, flags);
    if (NULL == window) std::cout << "Could not create window: " << SDL_GetError() << std::endl;

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (NULL == renderer) std::cout << "Could not create renderer: " << SDL_GetError() << std::endl;

    player = new Player(renderer);
};

void Game::input() {
    if (SDL_PollEvent(&event)) {
        switch(event.type) {

            case SDL_QUIT:
                running = false;
                break;

            case SDL_KEYDOWN:
                switch(event.key.keysym.sym) {
                    case 119:
                        up = 1;
                        break;

                    case 97:
                        left = 1;
                        break;

                    case 115:
                        down = 1;
                        break;

                    case 100:
                        right = 1;
                        break;
                }
                break;

            case SDL_KEYUP:
                switch(event.key.keysym.sym) {
                    case 119:
                        up = 0;
                        break;

                    case 97:
                        left = 0;
                        break;

                    case 115:
                        down = 0;
                        break;

                    case 100:
                        right = 0;
                        break;
                }
                break;       
        }
    }
};

void Game::update() {
    player->update(up, left, down, right);
};

void Game::draw() {
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    player->draw();

    SDL_RenderPresent(renderer);
};

void Game::clean() {
    SDL_DestroyWindow(window);
    SDL_Quit();
};