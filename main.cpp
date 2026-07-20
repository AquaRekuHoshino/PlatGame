#include <iostream>
#include <String.h>
#include <raylib.h>
#include "src/Player/player.h"
#include "src/obj/floor.h"



player player;
floor floor;
void update()
{

    player.updatePlayer();


}

void render()
{

    ClearBackground(RAYWHITE);
    player.RenderPlayer();
    floor.renderFloor();


}

int main() {
    InitWindow(1000,600,"PlatGame InDev 0.3");
    SetTargetFPS(60);
    while (!WindowShouldClose())
    {

        update();
        BeginDrawing();
        render();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
