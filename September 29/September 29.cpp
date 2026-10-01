#include <iostream>
#include <Windows.h>
#include"Function.h"

using namespace std;

int main()
{
    srand(time(0));

    int d4Result = -1;
    int d20Result = -1;

    int numberOfDiceRolls = 0;
    int totalNumberOfRolls = 0;

    while (d4Result != 1 || d20Result != 1)
    {
        d4Result = rollDice(4);
        d20Result = rollDice(20);

        cout << "D4 rolled: " << d4Result << "  D20 rolled: " << d20Result << "\n";

        numberOfDiceRolls++;
    }
    cout << "It took thiis many rolls to roll snake eyes: " << numberOfDiceRolls << "\n";


    system("pause");
    system("cls");

    totalNumberOfRolls = totalNumberOfRolls + numberOfDiceRolls;
    numberOfDiceRolls = 0;

    d4Result = -1;
    d20Result = -1;


}

