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

class OBlock : public Block
{
public:
    OBlock(){
        id = 2;
        cells[0] ={ 
            Pos(1,1), 
            Pos(1,0),
            Pos(0,0),
            Pos(0,1)
        };
    }
    
};
class IBlock : public Block
{
public:
    IBlock(){
        id = 3;
        cells[0] ={ 
            Pos(1,0), 
            Pos(1,1),
            Pos(1,2),
            Pos(1,3)
        };
        cells[1] ={ 
            Pos(0,1), 
            Pos(1,1),
            Pos(2,1),
            Pos(3,1)
        };
    }
};

class ZBlock : public Block
{
public:
    ZBlock(){
        id = 4;
        cells[0] ={ 
            Pos(0,0), 
            Pos(1,0),
            Pos(1,1),
            Pos(2,1)
        };
        cells[1] ={ 
            Pos(1,0), 
            Pos(1,1),
            Pos(0,1),
            Pos(0,2)
        };
    }
};


class SBlock : public Block
{
public:
    SBlock(){
        id = 5;
        cells[0] ={ 
            Pos(0,1), 
            Pos(1,1),
            Pos(1,0),
            Pos(2,0)
        };
        cells[1] ={ 
            Pos(0,0), 
            Pos(0,1),
            Pos(1,1),
            Pos(1,2)
        };
    }
};

class TBlock : public Block
{
public:
    TBlock(){
        id = 6;
        cells[0] ={ 
            Pos(0,0), 
            Pos(1,0),
            Pos(2,0),
            Pos(1,1)
        };
        cells[1] ={ 
            Pos(0,1), 
            Pos(1,0),
            Pos(1,1),
            Pos(1,2)
        };
        cells[2] ={ 
            Pos(1,0), 
            Pos(0,1),
            Pos(1,1),
            Pos(2,1)
        };
        cells[3] ={ 
            Pos(0,0), 
            Pos(0,1),
            Pos(0,2),
            Pos(1,1)
        };
    }
};