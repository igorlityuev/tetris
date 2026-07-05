#pragma once
#include "lib.hpp"
#include "pos.hpp"



class Block{
public:
    Block();
    int id;
    std::map<int, std::vector<Pos>> cells;
    void Draw();
private:
    int routation;

};