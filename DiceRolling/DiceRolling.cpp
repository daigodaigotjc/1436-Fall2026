#include"HiLo.h"
#include <iostream>

using namespace std;

int main()
{
    cout << "This is Dice rolling simulator" << "\n";
    int random20 = d20();
    int random4 = d4();

    while (random20 != 1 || random4 != 1)
    {
        cout << "Your 20-sided dice is: " << random20 << " and 4-sided dice is: " << random4 << "\nTry again!\n";
        random20 = d20();
        random4 = d4();

        system("pause");
        system("cls");

    }//while end


    cout << "Your 20-sided dice is: " << random20 << " and 4-sided dice is: " << random4 << "\n";
    cout << "Your both 20-sided and 4-sided dice are 1 (snake eyes)\n";
        
}//main end

