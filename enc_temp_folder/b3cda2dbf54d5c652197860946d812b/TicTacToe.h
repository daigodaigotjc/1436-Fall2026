#pragma once

#include <string>
#include <vector>

namespace TicTacToe
{
	using twoDGrid = std::vector<std::vector<std::string>>;

	void playGame(twoDGrid& ticTacToeGrid);

	void updateGrid(twoDGrid& ticTacToeGrid, std::string playerMove, std::string playerID);

	void printTheGrid(twoDGrid& ticTacToeGrid);
}

