#pragma once

#include <vector>
#include "Colors.hpp"
#define SizeGame 30


class Grid
{
private:
    std::vector<Color> colors;

public:
    int height, width;
    int grid[20][10];
    void ClearY(int y);
    void Down(int y, int count);
    void MoveDownGrid(int count);


    Grid();
    void Draw();
};