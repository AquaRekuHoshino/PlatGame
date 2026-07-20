#include <iostream>
#include <String.h>
#include <raylib.h>



std::string update()
{
    std::string text = "Hola xd este texto es retornado por una \nfuncion de raylib";
    return text;
}

void render()
{
    BeginDrawing();
    ClearBackground(RAYWHITE);
    EndDrawing();
}

int main() {
    InitWindow(500,500,"PlatGame InDev 0.1");
    SetTargetFPS(60);
    while (!WindowShouldClose())
    {

        update();
        render();

    }

    CloseWindow();
    return 0;
}
