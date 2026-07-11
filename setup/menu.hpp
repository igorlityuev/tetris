#pragma once
#include <raylib.h>


class Menu
{
public:
    Menu();
    void Draw();
    double GetInterval();
    void SetPoints(int count);
private:
    int points;
    double interval;
    Font times; 
};