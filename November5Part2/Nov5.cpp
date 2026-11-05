#include <iostream>
#include"TicTacToe.h"

int main()
{
	//TicTacToe::playGame();

	std::vector<std::vector<std::string>> ticTacToeGrid(3, std::vector<std::string>(3));

	TicTacToe::playGame(ticTacToeGrid);
}