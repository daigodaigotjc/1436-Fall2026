#include <iostream>

int main()
{
	// part 1
	std::cout << "Enter a character ('a', '$', etc.): " << std::endl;

	char userInput;
	std::cin >> userInput;

	int numberOfCharacters = 1;
	while (userInput != 'q')
	{
		std::cout << "Enter ANOTHER character (q to quit): " << std::endl;
		std::cin >> userInput;
		numberOfCharacters++;
	}

	std::cout << "You entered this many characters total: "
		<< numberOfCharacters << std::endl;
	std::cout << "The final character you entered was: "
		<< userInput << std::endl;




	//part 2
	
	for (char currentLetter = 'a'; currentLetter <= 'z'; currentLetter++)
	{
		std::cout << currentLetter << std::endl;
	}
}