#include<iostream>
#include<string>
#include<vector>

#include"Hangman.h"

int main()
{
	std::string absoluteFilepath = "C:\\Users\\daigo\\Downloads\\popular.txt";
	std::vector<std::string> dictionaryWords = getAllDictionaryWords(absoluteFilepath);

	for (int i = 0; i < 10; i++)
	{
		std::cout << "The random word to guess is: " << pickRandomWord(dictionaryWords) << std::endl;
	}
}