#include <iostream>
//#include "Globals.hpp">
#include "playGame.hpp"
#include "resetBoard.hpp"

using namespace std;

int main()
{
    int playerTurns = 1;
    string spots[] = {"1","2","3","4","5","6","7","8","9"};

    char gameContinue = '0';
	int p1W = 0, p2W = 0, ties = 0;
	cout << "\n";
	cout << "\t**------------------------------------------------**" << "\n";
	cout << "\t||          Welcome to the Game of Tic Tac        ||" << "\n";
	cout << "\t**------------------------------------------------**" << "\n" << "\n";
	playGame* game = new playGame(playerTurns, spots);

	while (gameContinue != 'q') {
		resetBoard* resetGame = new resetBoard();
		resetGame->reset(spots);
		delete resetGame;

		int whoWon = game->getWinner();

		switch (whoWon) {
		case 1:
			p1W++;
			break;
		case 2:
			p2W++;
			break;
		case 0:
			ties++;
			break;
		}

		cout << "Player 1 has " << p1W << " number of wins." << endl;
		cout << "Player 2 has " << p2W << " number of wins." << endl;
		cout << "There has been " << ties << " number of ties." << endl << endl;

		delete game;

		cout << "If you would like to quit enter q" << endl;
		cout << "Enter anything else to continue playing" << endl;
		cin >> gameContinue;
		cout << endl;
		if(gameContinue != 'q')
		{
		    playerTurns = 1;
		    playGame* game = new playGame(playerTurns, spots);
		}
	}

	cout << "\n";
	cout << "\t**------------------------------------------------**" << "\n";
	cout << "\t||               Thank you for playing            ||" << "\n";
	cout << "\t**------------------------------------------------**" << "\n" << "\n";

//    drawBoard* board = new drawBoard();
//    delete board;


    return 0;
}
