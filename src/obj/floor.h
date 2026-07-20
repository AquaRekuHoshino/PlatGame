//
// Created by Alejandro on 20/07/2026.
//

#ifndef PLATGAME_FLOOR_H
#define PLATGAME_FLOOR_H

#include <raylib.h>


class floor {
public:
    Vector2 posicion {500,350};
    Rectangle renderFloor();
};



#endif //PLATGAME_FLOOR_H
