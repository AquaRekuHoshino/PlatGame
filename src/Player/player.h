
#ifndef PLATGAME_PLAYER_H
#define PLATGAME_PLAYER_H

#include <raylib.h>
#include <iostream>
#include "../obj/floor.h"

class player
{
public:
    float speed = 250.0;
    float velocityY = 0;
    bool onGround = false;
    float jumpForce = -500.0f;
    float gravity = 800.0f; // píxeles por segundo²
    Vector2 posicion {500,300};
    void updatePlayer();
    Rectangle RenderPlayer();
};



#endif //PLATGAME_PLAYER_H
