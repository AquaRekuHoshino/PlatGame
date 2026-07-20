#include "player.h"


Rectangle player::RenderPlayer()
{
    Rectangle playerRec = {posicion.x, posicion.y, 50, 50};
    DrawRectangleRec(playerRec,BLUE);
    return playerRec;
}

void player::updatePlayer()
{
    floor floor;
    float dt = GetFrameTime();
    if (IsKeyDown(KEY_A)) posicion.x -= speed * dt;
    if (IsKeyDown(KEY_D)) posicion.x += speed * dt;
    if (posicion.x < 0) posicion.x = 0;
    if (posicion.x > 1000 - 50) posicion.x = 1000 - 50;  // 950
    if (IsKeyPressed(KEY_SPACE) && onGround) {
        velocityY = jumpForce;
        onGround = false;
    }

    // Cada frame:
    velocityY += gravity * GetFrameTime(); // acelera hacia abajo
    posicion.y += velocityY * GetFrameTime(); // mueve al jugador

    // Si toca el suelo, para:
    if (CheckCollisionRecs(this->RenderPlayer(),floor.renderFloor())){
        posicion.y = floor.posicion.y - 50;
        velocityY = 0;
        onGround = true;
    }



}
