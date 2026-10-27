#include <iostream>
#include <vector>
#include <cstdlib>


std::vector<std::string> RPSChoices = { "Rock", "Paper", "Scissors" };

std::vector<std::string> AMHChoices = { "Up", "Down", "Left", "Right" };

std::vector<std::string> Winner = { "player", "computer", "draw" };

int playerChoiceOfRPS()
{
	int playerChoice;
	std::cout << "Choose your move! 1:Rock, 2:Paper, 3:Scissors" << std::endl;
	std::cin >> playerChoice;

	while (true)
	{
		if (playerChoice == 1)
		{
			std::cout << "You chose " << RPSChoices[0] << std::endl;
			return playerChoice;
		}

		else if (playerChoice == 2)
		{
			std::cout << "You chose " << RPSChoices[1] << std::endl;
			return playerChoice;
		}

		else if (playerChoice == 3)
		{
			std::cout << "You chose " << RPSChoices[2] << std::endl;
			return playerChoice;
		}

		else
		{
			std::cout << "Invalid choice. Please choose 1 for Rock, 2 for Paper, or 3 for Scissors." << std::endl;
			std::cin >> playerChoice;
			continue;
		}
	}//while end
}


int computerChoiceOfRPS()
{
	int computerChoice = rand() % 3 + 1;

	switch (computerChoice)
	{
	case 1:
		std::cout << "Computer chose " << RPSChoices[0] << std::endl;
		break;
	case 2:
		std::cout << "Computer chose " << RPSChoices[1] << std::endl;
		break;
	case 3:
		std::cout << "Computer chose " << RPSChoices[2] << std::endl;
		break;
	}

	return computerChoice;
}

std::string RPSWinner(int playerChoice, int computerChoice)
{
	std::string winner;
	if (playerChoice == computerChoice)
	{
		std::cout << "It's a draw! Play again." << std::endl;
		winner = Winner[2];
	}
	else if ((playerChoice == 1 && computerChoice == 3) ||
		(playerChoice == 2 && computerChoice == 1) ||
		(playerChoice == 3 && computerChoice == 2))
	{
		std::cout << "You win! Now choose a direction to point your finger." << std::endl;
		winner = Winner[0];
	}
	else
	{
		std::cout << "Computer wins! Now choose a direction to turn your face." << std::endl;
		winner = Winner[1];
	}
	return winner;

}



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
	}
}


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