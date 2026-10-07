#include"StudentRelatedFunction.h"
#include <iostream>
#include <vector>

using namespace std;


void printListOfNumbers(vector<int> numbers)
{
	cout << numbers.size() << "\n";

	for (int i = 0; i < numbers.size( i++)
	{
		cout << numbers[i] << "\n";
	}
}

int main()
{
	vector<int> numbers = 
	{
		1, 2, 3, 4, 5
	};
	
	printListOfNumbers(numbers);


	vector<string> allStudentNames = getAllStudentNames("studentRoster.csv");

	//for (int i = 0; i < allStudentNames.size(); ++i)
	//{
	//	cout << allStudentNames[i] << endl;
	//}

	cout << "Longest name in list is: " << getLongestName(allStudentNames);
}

