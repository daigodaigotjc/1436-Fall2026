#include <iostream>
#include"TicTacToe.h"

int main()
{
	//TicTacToe::playGame();

	std::string fillerCharacter = "*";

	std::vector<std::vector<std::string>> ticTacToeGrid(3, std::vector<std::string>(3, "*"));
	//this makes an empty 2D array of size 3*3

	TicTacToe::playGame(ticTacToeGrid);
}