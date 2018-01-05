#include "resetBoard.hpp"

resetBoard::resetBoard()
{
    //does nothing
}

std::string* resetBoard::reset(std::string* spots)
{
    spots[0] = "1";
    spots[1] = "2";
    spots[2] = "3";
    spots[3] = "4";
    spots[4] = "5";
    spots[5] = "6";
    spots[6] = "7";
    spots[7] = "8";
    spots[8] = "9";

    return spots;
}
