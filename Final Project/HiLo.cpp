#include <iostream>
#include <vector>


std::vector<std::string> RPSChoices = { "Rock", "Paper", "Scissors" };

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
	srand(time(0));
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
		winner = "draw";
	}
	else if ((playerChoice == 1 && computerChoice == 3) ||
		(playerChoice == 2 && computerChoice == 1) ||
		(playerChoice == 3 && computerChoice == 2))
	{
		std::cout << "You win! Now choose a direction to point your finger." << std::endl;
		winner = "player";
	}
	else
	{
		std::cout << "Computer wins! Now choose a direction to turn your face." << std::endl;
		winner = "computer";
	}
	return winner;

}

std::vector<std::string> AMHChoices = { "Up", "Down", "Left", "Right" };

int playerChoiceOfDirection()
{
	int playerChoice;
	std::cout << "Choose your direction! 1:Up, 2:Down, 3:Left, 4:Right" << std::endl;
	std::cin >> playerChoice;

	switch (playerChoice)
	{
	case 1:
		std::cout << "You chose " << AMHChoices[0] << std::endl;
		break;
	case 2:
		std::cout << "You chose " << AMHChoices[1] << std::endl;
		break;
	case 3:
		std::cout << "You chose " << AMHChoices[2] << std::endl;
		break;
	case 4:
		std::cout << "You chose " << AMHChoices[3] << std::endl;
		break;
	default:
		std::cout << "Invalid choice. Please choose 1 for Up, 2 for Down, 3 for Left, or 4 for Right." << std::endl;
		break;
	}
	return playerChoice;
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
	}

	return computerChoice;
}



std::string AMHWinner(int playerDirection, int computerDirection, std::string winnerOfRPS)
{
	std::string winnerOfAMH;

	if (winnerOfRPS == "player")
	{
		if (playerDirection == computerDirection)
		{
			std::cout << "You win the game!" << std::endl;
			winnerOfAMH = "player";
		}
		else
		{
			std::cout << "No match! Play 'Rock Paper Scissors' again." << std::endl;
		}

	}
	else if (winnerOfRPS == "computer")
	{
		if (playerDirection == computerDirection)
		{
			std::cout << "Computer wins the game!" << std::endl;
			winnerOfAMH = "computer";
		}
		else
		{
			std::cout << "No match! Play 'Rock Paper Scissors' again." << std::endl;
		}
	}

	return winnerOfAMH;
}