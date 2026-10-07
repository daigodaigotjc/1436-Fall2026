
#include"HiLo.h"

using namespace std;

int main()
{
    string inputPassword = promptForPassword();

    bool viewFileOrNot = askAndPromptForPassword(inputPassword);

    if (viewFileOrNot == true)
    {
		displayFile();
    }

    return 0;
}

