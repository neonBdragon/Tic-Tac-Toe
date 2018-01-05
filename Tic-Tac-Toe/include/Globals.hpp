#ifndef GLOBALS_H
#define GLOBALS_H

#include <string>


class Globals
{
public:
    Globals();
    int getPlayerTurns();
    std::string getSpot(int loc);
    std::string setSpot(int loc, std::string letter);


private:
    int playerTurns;
    std::string* spots;
};



#endif // GLOBALS_H
