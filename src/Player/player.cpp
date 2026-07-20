#include "player.h"

void player::RenderPlayer()
{
    DrawRectangle(posicion.x,posicion.y,50,50,BLUE);
}

void player::updatePlayer()
{
    float dt = GetFrameTime();
    if (IsKeyDown(KEY_A)) posicion.x -= speed * dt;
    if (IsKeyDown(KEY_D)) posicion.x += speed * dt;
    if (posicion.x < 0) posicion.x = 0;
    if (posicion.x > 1000 - 50) posicion.x = 1000 - 50;  // 950

}
