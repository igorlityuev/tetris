#include "block.hpp"
#include <raylib.h>
#include <vector>
#include "Colors.hpp"


Block::Block(){
    rotation = 0;
    move_x = move_y =0;
}


void Block::Draw(){
    std::vector<Pos> title = GetCells();

    for (Pos i : title){
        DrawRectangle(i.x * SizeGame + 1, i.y * SizeGame + 1, SizeGame - 1, SizeGame - 1,GetColors()[2]);
    }
}

void Block::Move(int move_x, int move_y)
{
    this->move_x += move_x;
    this->move_y += move_y;

}


int Block::GetSize(){
    return cells.size();
}

std::vector<Pos> Block::GetCells(){
    std::vector<Pos> p = cells[rotation];
    std::vector<Pos> out;
    
    for (Pos i : p)
    {
        Pos newPos =Pos(i.x + move_x, i.y+move_y);
        out.push_back(newPos); 
    }
    
    return out;
}
