#include <iostream>
#include <vector>


auto print2DArray(std::vector<std::vector<std::string>> twoDArray)
{
	int numberOfRowInMainFunctionRightNow = 3;

	std::cout << "The size of the2d array is: " << twoDArray.size() << std::endl;
	std::cout << "And the size of the zeroth (first) row in the array is: " << twoDArray[0].size() << std::endl;


	for (int rowNumber = 0; rowNumber < twoDArray.size(); ++rowNumber)
	{
		for (int column = 0; column < twoDArray[0].size(); ++column)
		{
			std::cout << twoDArray[rowNumber][column] << " ";
		}
		std::cout << std::endl;
	}
}


int main()
{
	std::vector<std::vector<std::string>> peopleInThisRoom =
	{
		{ "Tim", "Casper", "Japeah" },
		{ "Python person", "Hirata San", "Another empty spot", "Demster" },
		{ "Sameer" }
	};

	std::cout << peopleInThisRoom[0][0] << std::endl;

	print2DArray(peopleInThisRoom);
}