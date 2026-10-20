#include <iostream>
#include <vector>

int playerChoiceOfRPS()
{
	int playerChoice;
	std::cout << "Choose your move! 1:Rock, 2:Paper, 3:Scissors" << std::endl;
	std::cin >> playerChoice;

	switch (playerChoice)
	{
	case 1:
		std::cout << "You chose Rock." << std::endl;
		break;
	case 2:
		std::cout << "You chose Paper." << std::endl;
		break;
	case 3:
		std::cout << "You chose Scissors." << std::endl;
		break;
	default:
		std::cout << "Invalid choice. Please choose 1 for Rock, 2 for Paper, or 3 for Scissors." << std::endl;
		break;
	}

	return playerChoice;
}


int computerChoiceOfRPS()
{
	int computerChoice = rand() % 3 + 1;

	switch (computerChoice)
	{
	case 1:
		std::cout << "Computer chose Rock." << std::endl;
		break;
	case 2:
		std::cout << "Computer chose Paper." << std::endl;
		break;
	case 3:
		std::cout << "Computer chose Scissors." << std::endl;
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


int playerChoiceOfDirection()
{
	int playerChoice;
	std::cout << "Choose your direction! 1:Up, 2:Down, 3:Left, 4:Right" << std::endl;
	std::cin >> playerChoice;

	switch (playerChoice)
	{
	case 1:
		std::cout << "You chose Up." << std::endl;
		break;
	case 2:
		std::cout << "You chose Down." << std::endl;
		break;
	case 3:
		std::cout << "You chose Left." << std::endl;
		break;
	case 4:
		std::cout << "You chose Right." << std::endl;
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
		std::cout << "Computer chose Up." << std::endl;
		break;
	case 2:
		std::cout << "Computer chose Down." << std::endl;
		break;
	case 3:
		std::cout << "Computer chose Left." << std::endl;
		break;
	case 4:
		std::cout << "Computer chose Right." << std::endl;
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