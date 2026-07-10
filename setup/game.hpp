


#include "block.hpp"
#include "blocks.hpp"
#include "grid.hpp"
#include <vector>



class Game
{

public:
    Game();
    Grid grid;




    void Draw();
    void HandleInput();
    void MoveDown();
private:

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