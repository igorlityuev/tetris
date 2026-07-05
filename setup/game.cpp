#include "game.hpp"
#include <raylib.h>



static int rrr=0;

Game::Game(){
    grid = Grid();
    //! fix Tblock,
    bloks = {LBlock(), IBlock(),OBlock(), TBlock(),ZBlock(),SBlock()};
    currentBlock = bloks[0];
}



void Game::Draw(){
    grid.Draw();
    currentBlock.Draw();


}




void Game::MoveDown(){
    currentBlock.Move(0, 1);
}
void Game::Rotation(){
    int size = currentBlock.GetSize();
    if (currentBlock.rotation - 1 == -1 ){
        currentBlock.rotation = size-1;
    }else{
        currentBlock.rotation-=1;
    }
}
void Game::MoveRight(){
    currentBlock.Move(1, 0);

}
void Game::MoveLeft(){
    currentBlock.Move(-1, 0);
}


void Game::ChangeFigure(){
    if (++rrr == bloks.size()){
        rrr =0;
        return;
    }
    currentBlock  = bloks[rrr];

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
            ChangeFigure();
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