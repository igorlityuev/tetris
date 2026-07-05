#include "raylib.h"
#include "setup/game.hpp"



int main() {

    const int ScreenWidth = 300, ScreenHeight=600;
    Game g = Game();



    InitWindow(ScreenWidth, ScreenHeight, "raylib test");
    Color bg = {60, 59, 69, 255};

    SetTargetFPS(60);


    while (!WindowShouldClose()) {
        g.HandleInput();
        BeginDrawing();
        ClearBackground(bg);
        g.Draw();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}