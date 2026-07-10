#pragma once
#define SizeGame 30
#include "pos.hpp"
#include <map>
#include <vector>


class Block{
public:
    Block();
    int id;
    std::map<int, std::vector<Pos>> cells;
    void Draw();
    int GetSize();
    void Move(int move_x, int move_y);
    int rotation;

    std::vector<Pos> GetCells();

private:
    int move_x,move_y;
};