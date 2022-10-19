#include "Player.h"

const float sqrt2 = 1.41;

Player::Player(SDL_Renderer *_renderer) {
    renderer = _renderer;
    playerRect.x = 64;
    playerRect.y = 64;
    playerRect.w = 64;
    playerRect.h = 64;
};

Player::~Player() {};

void Player::update(bool _up, bool _left, bool _down, bool _right) {
    hMove = _right - _left;
    vMove = _down - _up;

    if (hMove == 0 || vMove == 0) {
        playerRect.x += hMove * speed;
        playerRect.y += vMove * speed;

    } else {
        playerRect.x += (hMove * speed) / sqrt2;
        playerRect.y += (vMove * speed) / sqrt2;
    }
}

void Player::draw() {
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderFillRect(renderer, &playerRect);
}