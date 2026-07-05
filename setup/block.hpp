#pragma once
#define Size 30
#include "pos.hpp"
#include <map>
#include <vector>


class Block{
public:
    Block();
    int id;
    std::map<int, std::vector<Pos>> cells;
    void Draw();
private:
    int routation;

};