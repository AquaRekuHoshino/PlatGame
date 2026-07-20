#include <iostream>
#include <String.h>
#include <raylib.h>
#include "src/Player/player.h"


player player;
void update()
{

    player.updatePlayer();

}

void render()
{

    ClearBackground(RAYWHITE);
    player.RenderPlayer();

}

int main() {
    InitWindow(1000,600,"PlatGame InDev 0.1");
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
