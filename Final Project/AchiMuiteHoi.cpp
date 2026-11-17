#include"AchiMuiteHoi.h"
#include"RockPaperScissors.h"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>


std::vector<std::string> AMHChoices = { "Up", "Down", "Left", "Right" };


//function for player choice of the directions 1:Up 2:Down 3:Left 4:Right and show its choice
int playerChoiceOfDirection()
{
	int playerChoice;
	std::cout << "Choose your direction! 1:Up, 2:Down, 3:Left, 4:Right" << std::endl;
	std::cin >> playerChoice;

	while (true)
	{
		//player's choice is shown in red (\033[31m)
		if (playerChoice == 1)
		{
			std::cout << "You chose " << "\033[31m" << AMHChoices[0] << "\033[0m" << std::endl;
			return playerChoice;
		}
		else if (playerChoice == 2)
		{
			std::cout << "You chose " << "\033[31m" << AMHChoices[1] << "\033[0m" << std::endl;
			return playerChoice;
		}
		else if (playerChoice == 3)
		{
			std::cout << "You chose " << "\033[31m" << AMHChoices[2] << "\033[0m" << std::endl;
			return playerChoice;
		}
		else if (playerChoice == 4)
		{
			std::cout << "You chose " << "\033[31m" << AMHChoices[3] << "\033[0m" << std::endl;
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

//function for computer random direction and show the its choice
int computerChoiceOfDirection()
{
	int computerChoice = rand() % 4 + 1;

	//computer' choice is shown in yellow (\033[33m)
	switch (computerChoice)
	{
	case 1:
		std::cout << "Computer chose " << "\033[33m" << AMHChoices[0] << "\033[0m" << std::endl;
		break;
	case 2:
		std::cout << "Computer chose " << "\033[33m" << AMHChoices[1] << "\033[0m" << std::endl;
		break;
	case 3:
		std::cout << "Computer chose " << "\033[33m" << AMHChoices[2] << "\033[0m" << std::endl;
		break;
	case 4:
		std::cout << "Computer chose " << "\033[33m" << AMHChoices[3] << "\033[0m" << std::endl;
		break;
	}
	return computerChoice;
}

//function for deciding Achi Muite Hoi winner
std::string AMHWinner(int playerDirection, int computerDirection, std::string winnerOfRPS)
{
	std::string winnerOfAMH;

	//player wins RPS, then player wins AMH if the directions match
	if (winnerOfRPS == Winner[0])
	{
		//if player wins, the sentence is shown in red
		if (playerDirection == computerDirection)
		{
			std::cout << "\033[31m" << "You win the game!" << "\033[0m" << std::endl;
			winnerOfAMH = Winner[0];
		}
		//if it is no match, the sentence is shown in green (\033[32m)
		else
		{
			std::cout << "\033[32m" << "No match! Play 'Rock Paper Scissors' again." << "\033[0m" << std::endl;
		}

	}
	//computer wins RPS, then computer wins AMH if the directions match
	else if (winnerOfRPS == Winner[1])
	{
		//if computerChoice wins, the sentence is shown in yellow
		if (playerDirection == computerDirection)
		{
			std::cout << "\033[33m" << "Computer wins the game!" << "\033[0m" << std::endl;
			winnerOfAMH = Winner[1];
		}
		//if it is no match, the sentence is shown in green (\033[32m)
		else
		{
			std::cout << "\033[32m" << "No match! Play 'Rock Paper Scissors' again." << "\033[0m" << std::endl;
		}
	}
	return winnerOfAMH;
}