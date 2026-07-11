#include "game.hpp"
#include "pos.hpp"
#include <cstdlib>
#include <ctime>
#include <raylib.h>


Game::Game(Menu &m) : m(m){
    grid = Grid();
    blocks = {LBlock(), IBlock(),OBlock(), TBlock(),ZBlock(),SBlock()};
    currentBlock = ChangeFigure();
}



void Game::Draw(){
    grid.Draw();
    currentBlock.Draw();


}

void Game::CheckY() {

    int count = 0;
    for (int y = 19; y >= 0; y--) {
        bool isFull = true;
        for (int x = 0; x < 10; x++) {
            if (grid.grid[y][x] == 0) {
                isFull = false;
                break;
            }
        }
        if (isFull){
            count++;
            grid.ClearY(y);
        }
        else{
            if (count){
                grid.Down(y, count);
            }
        }
    }
    m.SetPoints(count);

}

void Game::MoveDown(){
    currentBlock.Move(0, 1);
    if (IsOutSite() || IsEmpty()){         
        currentBlock.Move(0, -1);
        Lockblock(); 

    }
}
void Game::Rotation(){
    int size = currentBlock.GetSize();
    currentBlock.rotation = (currentBlock.rotation - 1 + size) % size;
    if (IsOutSite() || IsEmpty()) {
        currentBlock.rotation = (currentBlock.rotation + 1) % size;
    }

}
void Game::MoveRight(){
    currentBlock.Move(1, 0);
    if (IsOutSite() || IsEmpty()){         
        currentBlock.Move(-1, 0);  
    }
}

void Game::MoveLeft(){
    currentBlock.Move(-1, 0);
    if (IsOutSite() ||IsEmpty()){
        currentBlock.Move(1, 0);
    }
}


bool Game::IsEmpty()
{
    for (Pos i : currentBlock.GetCells()){
        if (grid.grid[i.y][i.x] !=0)
        {
            return true;  
        }
    }
    return false;  
}

Block Game::ChangeFigure(){
    srand(static_cast<unsigned>(time(nullptr)));
    int r = rand() % 6;
    return blocks[r];
}



bool Game::IsOutSite()
{
    for (Pos i : currentBlock.GetCells()){
        if (i.x < 0 || i.x >= grid.width || i.y < 0 || i.y >= grid.height)
        {
            return true;  
        }
    }
    return false;  
}

void Game::HandleInput(){
    int keyPresed = GetKeyPressed();
    switch (keyPresed) 
    {
        case KEY_UP:
        case KEY_W:
            Rotation();
            break;
            
        case KEY_O:
            currentBlock = ChangeFigure();
            break;

        case KEY_RIGHT:
        case KEY_D:
            MoveRight();
            break; 

        case KEY_DOWN:
        case KEY_S:
            MoveDown();
            break;

        case KEY_LEFT:
        case KEY_A:
            MoveLeft();
            break;

    }

}



void Game::Lockblock()
{
    std::vector<Pos> t = currentBlock.GetCells();

    for (Pos i : t){
        grid.grid[i.y][i.x] = currentBlock.id;
    }
    currentBlock = ChangeFigure();
    CheckY();

}