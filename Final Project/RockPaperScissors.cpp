//This cpp file is for Rock Paper Scissors game


#include"RockPaperScissors.h"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>



std::vector<std::string> RPSChoices = { "Rock", "Paper", "Scissors" };




//function for player choice of the options 1:Rock 2:Paper 3:Scissors
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


//function for random computer choice
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



std::vector<std::string> Winner = { "player", "computer", "draw" };

//function for deciding a winner
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