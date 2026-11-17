#include"Hangman.h"
#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<random>


std::vector<std::string> getAllDictionaryWords(std::string filename)
{
	std::vector<std::string> words;

	std::ifstream fin(filename);

	if (fin.is_open() == false)
	{
		std::cout << "Could not find the file " << filename << std::endl;
		return {}; //empty array -> go no further
	}

	std::string currentWord;
	
	while (std::getline(fin, currentWord))
	{
		words.push_back(currentWord);
	}
	std::cout << "The number of words is: " << words.size() << std::endl;

	return words;
}

std::string pickRandomWord(std::vector<std::string> words)
{
	std::string randomWord;

	std::mt19937 rng(std::random_device{}());
	//mt -> Mersenne Twister engine (rng) -> 19337 is a PRIME number

	std::uniform_int_distribution<int> distribution(0, words.size() - 1);

	int randomIndex = distribution(rng);

	randomWord = words[randomIndex];

	return randomWord;
}

std::string generatePlaceholder(std::string wordToGuess)
{
	std::string placeholder;

	for (int i = 0; i < wordToGuess.size(); ++i)
	{
		placeholder.push_back('*');
	}
	return placeholder;
}

void playHangman()
{
	std::string absoluteFilepath = "C:\\Users\\daigo\\Downloads\\popular.txt";

	std::vector<std::string> dictionaryWords = getAllDictionaryWords(absoluteFilepath);

	std::string wordToGuess = pickRandomWord(dictionaryWords);

	std::string placeholder = generatePlaceholder(wordToGuess);


	std::cout << "The word is: " << wordToGuess << std::endl;
	std::cout << "The word to guess is: " << placeholder << std::endl;

	while (placeholder != wordToGuess)
	{

	}
}