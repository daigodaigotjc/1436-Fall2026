#include"HiLo.h"
#include <iostream>
#include <cstdlib>

int d20()
{
	srand(time(0));
	int random20 = rand() % 20 + 1;
	return random20;
}

int d4()
{
	srand(time(0));
	int random4 = rand() % 4 + 1;
	return random4;
}
