#pragma once

#include "lib.hpp"

class Grid
{
private:
    int height, width, size;
    std::vector<Color> colors;

    public:
    int grid[20][10];
    Grid();
    void Draw();
};