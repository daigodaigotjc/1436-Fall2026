#include"AchiMuiteHoi.h"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>



std::vector<std::string> AMHChoices = { "Up", "Down", "Left", "Right" };



//function for player choice of the directions 1:Up 2:Down 3:Left 4:Right
int playerChoiceOfDirection()
{
	int playerChoice;
	std::cout << "Choose your direction! 1:Up, 2:Down, 3:Left, 4:Right" << std::endl;
	std::cin >> playerChoice;

	while (true)
	{
		if (playerChoice == 1)
		{
			std::cout << "You chose " << AMHChoices[0] << std::endl;
			return playerChoice;
		}
		else if (playerChoice == 2)
		{
			std::cout << "You chose " << AMHChoices[1] << std::endl;
			return playerChoice;
		}
		else if (playerChoice == 3)
		{
			std::cout << "You chose " << AMHChoices[2] << std::endl;
			return playerChoice;
		}
		else if (playerChoice == 4)
		{
			std::cout << "You chose " << AMHChoices[3] << std::endl;
			return playerChoice;
		}
		else
		{
			std::cout << "Invalid choice. Please choose 1 for Up, 2 for Down, 3 for Left, or 4 for Right." << std::endl;
			std::cin >> playerChoice;
			continue;
		}
	}//while end
}



//function for computer random direction
int computerChoiceOfDirection()
{
	int computerChoice = rand() % 4 + 1;

	switch (computerChoice)
	{
	case 1:
		std::cout << "Computer chose " << AMHChoices[0] << std::endl;
		break;
	case 2:
		std::cout << "Computer chose " << AMHChoices[1] << std::endl;
		break;
	case 3:
		std::cout << "Computer chose " << AMHChoices[2] << std::endl;
		break;
	case 4:
		std::cout << "Computer chose " << AMHChoices[3] << std::endl;
		break;
	}
	return computerChoice;
}



std::vector<std::string> Winner = { "player", "computer", "draw" };

//function for deciding Achi Muite Hoi winner
std::string AMHWinner(int playerDirection, int computerDirection, std::string winnerOfRPS)
{
	std::string winnerOfAMH;

	if (winnerOfRPS == Winner[0])
	{
		if (playerDirection == computerDirection)
		{
			std::cout << "You win the game!" << std::endl;
			winnerOfAMH = Winner[0];
		}
		else
		{
			std::cout << "No match! Play 'Rock Paper Scissors' again." << std::endl;
		}

	}
	else if (winnerOfRPS == Winner[1])
	{
		if (playerDirection == computerDirection)
		{
			std::cout << "Computer wins the game!" << std::endl;
			winnerOfAMH = Winner[1];
		}
		else
		{
			std::cout << "No match! Play 'Rock Paper Scissors' again." << std::endl;
		}
	}
	return winnerOfAMH;
}