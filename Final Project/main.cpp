#include"HiLo.h"
#include <iostream>

int main()
{
	std::cout << "This is 'Achi Muite Hoi' game.\n"
		<< "This game is a Japanese game.\n"
		<< "To begin with, you will play 'Rock Paper Scissors' game.\n"
		<< "If you win, you will point your finger to the direction of your choice.\n"
		<< "If you lose, you will turn your face to the direction of your choice.\n"
		<< "If you draw, you will play 'Rock Paper Scissors' game again.\n"
		<< "If you point your finger to the same direction as your opponent's face, you will win.\n"
		<< "If you turn your face to the same direction as your opponent's finger, you will lose.\n"
		<< "If you point your finger to a different direction than your opponent's face, you will play 'Rock Paper Scissors' game again.\n"
		<< "If you turn your face to a different direction than your opponent's finger, you will play 'Rock Paper Scissors' game again.\n"
		<< "Let's start the game!\n";

	bool gameRunning = true;

	while (gameRunning)
	{
		int playerChoice = playerChoiceOfRPS();
		int computerChoice = computerChoiceOfRPS();

		std::string winnerOfRPS = RPSWinner(playerChoice, computerChoice);

		if (winnerOfRPS == "draw")
		{
			while (winnerOfRPS == "draw")
			{
				playerChoice = playerChoiceOfRPS();
				computerChoice = computerChoiceOfRPS();
				winnerOfRPS = RPSWinner(playerChoice, computerChoice);
			}
		}

		int playerDirection = playerChoiceOfDirection();
		int computerDirection = computerChoiceOfDirection();
		std::string winnerOfAMH = AMHWinner(playerDirection, computerDirection, winnerOfRPS);

		if (winnerOfAMH == "player" || winnerOfAMH == "computer")
		{
			gameRunning = false;
		}

		system("pause");
		system("cls");
	}

	return 0;
	
}