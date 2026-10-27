#include <iostream>
#include <string>


std::string getUserInput()
{
	std::string userInput;

	std::cout << "enter a string: " << std::endl;
	std::getline(std::cin, userInput);

	return userInput;
}

bool isPalindrome(std::string input)
{
	std::string copyOfInput = input;

	std::reverse(input.begin(), input.end());

	return (copyOfInput == input);
}


int main()
{
	while (true)
	{
		std::string userInput = getUserInput();

		if (isPalindrome(userInput))
		{
			std::cout << "\033[0m";
			std::cout << "That is a palindrome" << std::endl;
		}
		else
		{
			std::cout << "\033[31m";
			std::cout << "That is not a palindrome" << std::endl;
		}
	}
}