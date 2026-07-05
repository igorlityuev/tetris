#pragma once

#include <vector>
#include "Colors.hpp"
#define SizeGame 30


class Grid
{
private:
    int height, width;
    std::vector<Color> colors;

    public:
    int grid[20][10];
    Grid();
    void Draw();
};