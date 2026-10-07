#include"HiLo.h"
#include <fstream>
#include <Windows.h>

using namespace std;

string promptForPassword()
{
	string password;

	cout << "Enter the password: " << "\n";
	getline(cin, password);

	return password;
}

bool askAndPromptForPassword(string password)
{
	string yesOrNo;
	cout << "Do you want to view the file? (y/n): " << "\n";
	getline(cin, yesOrNo);

	int count = 0;
	bool correct = false;

	

	if (yesOrNo == "y" || yesOrNo == "Y")
	{
		while (count < 3 || correct == false)
		{
			string userPassword;
			cout << "Enter your password: " << "\n";
			getline(cin, userPassword);
			count += 1;

			if (userPassword != password)
			{
				cout << "Enter valid password" << "\n";
				getline(cin, userPassword);
			}

			else
			{
				cout << "Correct password!" << "\n";
				correct = true;
				return correct;
			}

			system("pause");
			system("cls");
		}//end while loop

		cout << "You have exceeded the maximum number of attempts. Goodbye!" << "\n";
		return correct;

	}//end if statement

	else if (yesOrNo == "n" || yesOrNo == "N")
	{
		cout << "You have chosen not to view the file. Goodbye!" << "\n";
		return correct;
	}

	else
	{
		cout << "Invalid input. Goodbye!" << "\n";
		return correct;
	}

	


	
}//end function

void displayFile()
{
	ifstream fin("file.txt");

	if (fin.is_open() == false)
	{
		cout << "file.txt was not found: " << "\n";
		return;
	}

	string fileContents;
	while (getline(fin, fileContents))
	{
		cout << "The contents of the file are: " << "\n";
		cout << fileContents << "\n";
	}

	fin.close();
}