//This cpp file is for Rock Paper Scissors game

#include"RockPaperScissors.h"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>



std::vector<std::string> RPSChoices = { "Rock", "Paper", "Scissors", "quit" };




//function for player choice of the options 1:Rock 2:Paper 3:Scissors and show its choice
int playerChoiceOfRPS()
{
	int playerChoice;
	std::cout << "Choose your move! 1:Rock, 2:Paper, 3:Scissors or 4:quit" << std::endl;
	std::cin >> playerChoice;

	while (true)
	{
		//player's choice is shown in red (\033[31m)
		if (playerChoice == 1)
		{
			std::cout << "You chose " << "\033[31m" << RPSChoices[0] << "\033[0m" << std::endl;
			return playerChoice;
		}
		else if (playerChoice == 2)
		{
			std::cout << "You chose " << "\033[31m" << RPSChoices[1] << "\033[0m" << std::endl;
			return playerChoice;
		}
		else if (playerChoice == 3)
		{
			std::cout << "You chose " << "\033[31m" << RPSChoices[2] << "\033[0m" << std::endl;
			return playerChoice;
		}
		else if (playerChoice == 4)
		{
			std::cout << "You chose 'quit'" << std::endl;
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


//function for random computer choice and show its choice
int computerChoiceOfRPS()
{
	int computerChoice = rand() % 3 + 1;

	//computer' choice is shown in yellow (\033[33m)
	switch (computerChoice)
	{
	case 1:
		std::cout << "Computer chose " << "\033[33m" << RPSChoices[0] << "\033[0m" << std::endl;
		break;
	case 2:
		std::cout << "Computer chose " << "\033[33m" << RPSChoices[1] << "\033[0m" << std::endl;
		break;
	case 3:
		std::cout << "Computer chose " << "\033[33m" << RPSChoices[2] << "\033[0m" << std::endl;
		break;
	}

	return computerChoice;
}



std::vector<std::string> Winner = { "player", "computer", "draw" };

//function for deciding a winner 
std::string RPSWinner(int playerChoice, int computerChoice)
{
	std::string winner;

	//in draw case, the sentence is shown in green (\033[32m)
	if (playerChoice == computerChoice)
	{
		std::cout << "\033[32m" << "It's a draw! Play again." << "\033[0m" << std::endl;
		winner = Winner[2];
	}
	//if player wins, the sentence is shown in red
	else if ((playerChoice == 1 && computerChoice == 3) ||
		(playerChoice == 2 && computerChoice == 1) ||
		(playerChoice == 3 && computerChoice == 2))
	{
		std::cout << "\033[31m" << "You win! Now choose a direction to point your finger." << "\033[0m" << std::endl;
		winner = Winner[0];
	}
	//if computerChoice wins, the sentence is shown in yellow
	else
	{
		std::cout << "\033[33m" << "Computer wins! Now choose a direction to turn your face." << "\033[0m" << std::endl;
		winner = Winner[1];
	}
	return winner;
}