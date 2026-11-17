#pragma once

#include<string>
#include<vector>

std::vector<std::string> getAllDictionaryWords(std::string filename);

std::string pickRandomWord(std::vector<std::string> words);

void findAndReplace(std::string wordToGuess, std::string& placeholder, char characterToSearchFor);

/// <summary>/// Note that thi function will call other, helper  /// </summary>
void playHangman();