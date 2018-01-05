#include "Globals.hpp"

Globals::Globals()
{
    this->spots = new std::string[9];
    this->playerTurns = 1;
    this->spots[0] = "1";
    this->spots[1] = "2";
    this->spots[2] = "3";
    this->spots[3] = "4";
    this->spots[4] = "5";
    this->spots[5] = "6";
    this->spots[6] = "7";
    this->spots[7] = "8";
    this->spots[8] = "9";
}

int Globals::getPlayerTurns()
{
    return playerTurns;
}

std::string Globals::getSpot(int loc)
{
    return spots[loc];
}

std::string Globals::setSpot(int loc, std::string letter)
{
    return this->spots[loc] = letter;
}
