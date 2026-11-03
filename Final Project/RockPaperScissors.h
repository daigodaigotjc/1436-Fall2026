#pragma once
#include <iostream>
#include <string>
#include <vector>

extern std::vector<std::string> Winner;

int playerChoiceOfRPS();

int computerChoiceOfRPS();

std::string RPSWinner(int playerChoice, int computerChoice);