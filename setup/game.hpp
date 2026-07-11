


#include "block.hpp"
#include "blocks.hpp"
#include "grid.hpp"
#include "menu.hpp"
#include <vector>



class Game
{

public:
    Game(Menu &m);
    Grid grid;




    void Draw();
    void HandleInput();
    void MoveDown();
private:
    Menu& m;
    std::vector<Block> blocks;
    Block currentBlock;
    void Rotation();
    void CheckY();



    Block ChangeFigure();    
    
    bool IsEmpty();
    bool IsOutSite();
    bool IsTest();

    void MoveLeft();
    void MoveRight();
    void Lockblock();

};