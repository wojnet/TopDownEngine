#include <iostream>
#include <SDL2/SDL.h>
#include "Game.h"

const int WIDTH = 800, HEIGHT = 600;
Game* game;

int main(int argc, char *argv[]) {

    game = new Game();
    game->init("Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);

    while (game->isRunning()) {

        game->input();
        game->update();
        game->draw();

    }

    game->clean();

    return EXIT_SUCCESS;
}