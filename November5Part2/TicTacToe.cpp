#include"TicTacToe.h"

#include <iostream>
#include <string>


void TicTacToe::playGame(twoDGrid& ticTacToeGrid)
{
	bool isGameWon = false;
	int moveCount = 0;

	while (isGameWon == false)
	{

		std::cout << "Player X, enter your move: " << std::endl;
		std::cout << "Allowed moves are: " << std::endl;
		std::cout << "a b c" << std::endl;
		std::cout << "d e f" << std::endl;
		std::cout << "g h i" << std::endl;

		std::string playerXMove;

		std::getline(std::cin, playerXMove);

		updateGrid(ticTacToeGrid, playerXMove, "X");
		moveCount += 1;

		std::cout << "After the plater X made a move, the grid looks like: " << std::endl;
		printTheGrid(ticTacToeGrid);

		if (moveCount >= 5)
		{
			isGameWon = checkForHorizontalWin(ticTacToeGrid);
			isGameWon = checkForVerticalWin(ticTacToeGrid);
			isGameWon = checkForDiagonalWin(ticTacToeGrid);
			if (isGameWon == true)
			{
				break;
			}
		}

		/*now player O moves ***************************************/
		std::cout << std::endl << std::endl;
		std::cout << "Now player O" << std::endl;
		std::string playerOMove;

		std::getline(std::cin, playerOMove);

		updateGrid(ticTacToeGrid, playerOMove, "O");
		moveCount++;

		printTheGrid(ticTacToeGrid);

		if (moveCount >= 5)
		{
			isGameWon = checkForHorizontalWin(ticTacToeGrid);
			isGameWon = checkForVerticalWin(ticTacToeGrid);
			isGameWon = checkForDiagonalWin(ticTacToeGrid);
			if (isGameWon == true)
			{
				break;
			}
		}
	}


	
} //end the playGame function

void TicTacToe::updateGrid(twoDGrid& ticTacToeGrid, std::string theMove, std::string playerID)
{
	if (theMove == "a")
	{
		ticTacToeGrid[0][0] = playerID;
	}
	else if (theMove == "b")
	{
		ticTacToeGrid[0][1] = playerID;
	}
	else if (theMove == "c")
	{
		ticTacToeGrid[0][2] = playerID;
	}
	else if (theMove == "d")
	{
		ticTacToeGrid[1][0] = playerID;
	}
	else if (theMove == "e")
	{
		ticTacToeGrid[1][1] = playerID;
	}
	else if (theMove == "f")
	{
		ticTacToeGrid[1][2] = playerID;
	}
	else if (theMove == "g")
	{
		ticTacToeGrid[2][0] = playerID;
	}
	else if (theMove == "h")
	{
		ticTacToeGrid[2][1] = playerID;
	}
	else if (theMove == "i")
	{
		ticTacToeGrid[2][2] = playerID;
	}
}

void TicTacToe::printTheGrid(twoDGrid& ticTacToeGrid)
{
	for (int row = 0; row < ticTacToeGrid.size(); ++row)
	{
		for (int col = 0; col < ticTacToeGrid[0].size(); ++col)
		{
			std::cout << "|" << ticTacToeGrid[row][col];

			if (col == 2)
			{
				std::cout << "|";
			}
		}
		std::cout << std::endl;
		std::cout << " - - -" << std::endl;
	}
}

bool TicTacToe::checkForHorizontalWin(const twoDGrid& ticTacToeGrid)
{
	for (int row = 0; row < ticTacToeGrid.size(); ++row)
	{
		if (ticTacToeGrid[row][0] == ticTacToeGrid[row][1] &&
			ticTacToeGrid[row][1] == ticTacToeGrid[row][2])
		{
			std::cout << "Player " << ticTacToeGrid[row][0] << " won!" << std::endl;
			return true;
		}
	}
	return false;
}

bool TicTacToe::checkForVerticalWin(const twoDGrid& ticTacToeGrid)
{
	for (int col = 0; col < ticTacToeGrid[0].size(); ++col)
	{
		if (ticTacToeGrid[0][col] == ticTacToeGrid[1][col] &&
			ticTacToeGrid[1][col] == ticTacToeGrid[2][col])
		{
			std::cout << "Player " << ticTacToeGrid[0][col] << " won!" << std::endl;
			return true;
		}
	}
	return false;
}

bool TicTacToe::checkForDiagonalWin(const twoDGrid& ticTacToeGrid)
{
	if ((ticTacToeGrid[0][0] == ticTacToeGrid[1][1] && ticTacToeGrid[1][1] == ticTacToeGrid[2][2]) ||
		(ticTacToeGrid[0][2] == ticTacToeGrid[1][1] && ticTacToeGrid[1][1] == ticTacToeGrid[2][0]))
	{
		std::cout << "Player " << ticTacToeGrid[1][1] << " won!" << std::endl;
		return true;
	}
	return false;
}

bool TicTacToe::checkForWin(const twoDGrid& ticTacToeGrid)
{
	if (checkForHorizontalWin(ticTacToeGrid) == true)
	{
		return true;
	}
	else if (checkForVerticalWin(ticTacToeGrid) == true)
	{
		return true;
	}
	else if (checkForDiagonalWin(ticTacToeGrid) == true)
	{
		return true;
	}
	else
	{
		return false;
	}

	return false;
}

