#include "changeSpot.hpp"

changeSpot::changeSpot(int val, std::string letter, std::string spots[])
{
    if(val == 1 && spots[0] == "1")
    {
        spots[0] = letter;
    }
    else if(val == 2 && spots[1] == "2")
    {
        spots[1] = letter;
    }
    else if(val == 3 && spots[2] == "3")
    {
        spots[2] = letter;
    }
    else if(val == 4 && spots[3] == "4")
    {
        spots[3] = letter;
    }
    else if(val == 5 && spots[4] == "5")
    {
        spots[4] = letter;
    }
    else if(val == 6 && spots[5] == "6")
    {
        spots[5] = letter;
    }
    else if(val == 7 && spots[6] == "7")
    {
        spots[6] = letter;
    }
    else if(val == 8 && spots[7] == "8")
    {
        spots[7] = letter;
    }
    else if(val == 9 && spots[8] == "9")
    {
        spots[8] = letter;
    }
    else {
		std::cout << "The spot you entered is either invalid input or already has already been taken" << std::endl;
	}
}

