#ifndef PLAYGAME_H
#define PLAYGAME_H

#include <drawBoard.hpp>
#include <checkBoard.hpp>
#include <changeSpot.hpp>
#include <iostream>

class playGame
{
    public:
        playGame(int playerTurn, std::string* spots);
        int getWinner();

    private:
        int winner;
        drawBoard* board;
        checkBoard* check;
};

#endif // PLAYGAME_H
