#include "block.hpp"
#include <raylib.h>
#include "Colors.hpp"


Block::Block(){
    routation = 2;

}


void Block::Draw(){
    std::vector<Pos> title = cells[routation];

    for (Pos i : title){
        DrawRectangle(i.x * Size + 1, i.y * Size + 1, Size - 1, Size - 1,GetColors()[2]);
    }
}