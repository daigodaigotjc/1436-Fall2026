#pragma once
#include <iostream>

int playerChoiceOfRPS();
int computerChoiceOfRPS();
std::string RPSWinner(int playerChoice, int computerChoice);


int playerChoiceOfDirection();
int computerChoiceOfDirection();
std::string AMHWinner(int playerDirection, int computerDirection, std::string winner);
