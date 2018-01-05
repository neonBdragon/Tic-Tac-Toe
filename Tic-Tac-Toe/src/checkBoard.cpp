#include "checkBoard.hpp"

checkBoard::checkBoard()
{
    //does nothing
}

int checkBoard::checkPos(std::string* spots)
{
    if(spots[0] == spots[1] && spots[1] == spots[2])
    {
        return 1;
    }
    else if(spots[3] == spots[4] && spots[4] == spots[5])
    {
        return 1;
    }
    else if(spots[6] == spots[7] && spots[7] == spots[8])
    {
        return 1;
    }
    else if(spots[0] == spots[3] && spots[3] == spots[6])
    {
        return 1;
    }
    else if(spots[1] == spots[4] && spots[4] == spots[7])
    {
        return 1;
    }
    else if(spots[2] == spots[5] && spots[5] == spots[8])
    {
        return 1;
    }
    else if(spots[0] == spots[4] && spots[4] == spots[8])
    {
        return 1;
    }
    else if(spots[2] == spots[4] && spots[4] == spots[6])
    {
        return 1;
    }
    else if(spots[0] != "1" && spots[1] != "2" && spots[2] != "3" && spots[3] != "4" && spots[4] != "5" && spots[5] != "6" && spots[6] != "7" && spots[7] != "8" && spots[8] != "9")
    {
        return 2;
    }
    else
    {
        return 0;
    }

}
