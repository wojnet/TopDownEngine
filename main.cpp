#include <iostream>
#include <SDL2/SDL.h>
#include "Game.h"

const int WIDTH = 800, HEIGHT = 600;
Uint32 ticksBefore;
Uint32 ticksAfter;

Game* game;

int main(int argc, char *argv[]) {

    game = new Game();
    game->init("Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);

    while (game->isRunning()) {

        ticksBefore = SDL_GetTicks();

        game->input();
        game->update();
        game->draw();

        ticksAfter = SDL_GetTicks();

        if (ticksAfter - ticksBefore < 1000/60) {
            SDL_Delay(1000/60-ticksAfter+ticksBefore);
        }

    }

    game->clean();

    return EXIT_SUCCESS;
}