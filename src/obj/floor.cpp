#include "floor.h"

Rectangle floor::renderFloor()
{
    Rectangle floorRec = {posicion.x, posicion.y, 200, 48};
    DrawRectangleRec(floorRec, GRAY);
    return floorRec;
}
