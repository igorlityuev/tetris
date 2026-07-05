#include "setup/lib.hpp"
#include "setup/grid.hpp"
#include "setup/blocks.hpp"


int main() {

    const int ScreenWidth = 300, ScreenHeight=600;

    Grid g = Grid();

    LBlock lb =LBlock();

    InitWindow(ScreenWidth, ScreenHeight, "raylib test");
    Color bg = {60, 59, 69, 255};

    SetTargetFPS(60);


    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(bg);
        g.Draw();
        lb.Draw();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}