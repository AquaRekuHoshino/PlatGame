
#ifndef PLATGAME_PLAYER_H
#define PLATGAME_PLAYER_H

#include <raylib.h>
#include <iostream>

class player
{
public:
    float speed = 250.0;
    Vector2 posicion {500,300};
    void updatePlayer();
    void RenderPlayer();
};



#endif //PLATGAME_PLAYER_H
