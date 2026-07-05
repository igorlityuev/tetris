#include "block.hpp"
#include "pos.hpp"


class LBlock : public Block
{
public:
    LBlock(){
        id = 1;
        cells[0] ={ 
            Pos(0,2), 
            Pos(1,0),
            Pos(1,1),
            Pos(1,2)
        };


        cells[1] ={ 
            Pos(0,1), 
            Pos(1,1),
            Pos(2,1),
            Pos(2,2)
        };


        cells[2] ={ 
            Pos(1,0), 
            Pos(1,1),
            Pos(1,2),
            Pos(2,0)
        };


        cells[3] ={ 
            Pos(0,0), 
            Pos(0,1),
            Pos(1,1),
            Pos(2,1)
        };
    }
private:
    
};