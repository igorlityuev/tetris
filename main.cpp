#include "raylib.h"
#include "setup/game.hpp"
#include <cstdlib>
#include <ctime>

double lastTime = 0;

bool Interval(double interval){
    double CT = GetTime();
    if (CT - lastTime >= interval){
        lastTime = CT;
        return true;
    }
    return false;
}

int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    const int ScreenWidth = 600, ScreenHeight=600;
    Game g = Game();



    InitWindow(ScreenWidth, ScreenHeight, "raylib test");
    Color bg = {60, 59, 69, 255};

    SetTargetFPS(60);


    while (!WindowShouldClose()) {
        g.HandleInput();
        if (Interval(1)){
            g.MoveDown();
        }
        BeginDrawing();
        ClearBackground(bg);
        g.Draw();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}