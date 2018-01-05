#include "playGame.hpp"


playGame::playGame(int playerTurns, std::string* spots)
{
    board->createBoard(spots);

    int p1, p2;

    while(true)
    {
        if(playerTurns % 2 == 1)
        {
            std::cout << std::endl;
            std::cout << "Player 1 it's your turn" << std::endl;
            std::cout << "========================================" << std::endl;
            std::cin >> p1;
            std::cout << std::endl;

            changeSpot(p1, "X", spots);

            board->createBoard(spots);

            if(check->checkPos(spots) == 1)
            {
                std::cout << std::endl << std::endl << std::endl;
                std::cout << "Player 1 is the winner!" << std::endl;
                std::cout << std::endl << std::endl;
                this->winner = 1;
                break;
            }
            else if (check->checkPos(spots) == 2) {
				std::cout << std::endl << std::endl << std::endl;
				std::cout << "It's a Tie! No winner" << std::endl;
				std::cout << std::endl << std::endl;
				this->winner = 0;
				break;
			}
			playerTurns++;
        }

        if(playerTurns % 2 == 0)
        {
            std::cout << std::endl;
            std::cout << "Player 2 it's your turn" << std::endl;
            std::cout << "========================================" << std::endl;
            std::cin >> p2;
            std::cout << std::endl;

            changeSpot(p2, "O", spots);

            board->createBoard(spots);

            if(check->checkPos(spots) == 1)
            {
                std::cout << std::endl << std::endl << std::endl;
                std::cout << "Player 2 is the winner!" << std::endl;
                std::cout << std::endl << std::endl;
                this->winner = 2;
                break;
            }
            else if (check->checkPos(spots) == 2) {
				std::cout << std::endl << std::endl << std::endl;
				std::cout << "It's a Tie! No winner" << std::endl;
				std::cout << std::endl << std::endl;
				this->winner = 0;
				break;
			}
			playerTurns++;
        }
    }

    delete board;
    delete check;
}

int playGame::getWinner()
{
    return this->winner;
}


