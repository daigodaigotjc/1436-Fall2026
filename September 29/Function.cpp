#include"Function.h"
#include <iostream>
#include <cstdlib>

int rollDice(int numberOfSidesOnDice)
{
	

	int whatTheDiceRolled = rand() % numberOfSidesOnDice + 1;
	return whatTheDiceRolled;
}