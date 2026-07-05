


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
private:
    void ChangeFigure();

    std::vector<Block> bloks;
    Block currentBlock;
    void Rotation();
    void MoveDown();
    void MoveLeft();
    void MoveRight();
};