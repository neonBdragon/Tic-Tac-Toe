#include "drawBoard.hpp"

drawBoard::drawBoard()
{
    //does nothing
}

void drawBoard::createBoard(std::string* spots)
{
    std::cout << " " << spots[0] << " | " << " " << spots[1] << " | " << " " << spots[2] << std::endl;
    std::cout << "==========================" << std::endl;
    std::cout << " " << spots[3] << " | " << " " << spots[4] << " | " << " " << spots[5] << std::endl;
    std::cout << "==========================" << std::endl;
    std::cout << " " << spots[6] << " | " << " " << spots[7] << " | " << " " << spots[8] << std::endl;
}
