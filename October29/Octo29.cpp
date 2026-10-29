#include <iostream>
#include <vector>
#include <iomanip>


void printSalesData(std::vector<std::vector<int>> salesData)
{
	const int WIDEST_COLUMN = 7;

	for (int row = 0; row < salesData.size(); ++row)
	{
		for (int column = 0; column < salesData[0].size(); ++column)
		{
			std::cout << std::setw(WIDEST_COLUMN);
			std::cout << std::left;
			std::cout << salesData[row][column] << " ";
		}
		std::cout << std::endl;
	}

}


int main()
{
	std::vector<std::vector<int>> salesData =
	{
		{18503,    2938,    385038},
		{495830,    535739,	   6893},
		{73743,	   833839,     938593},
		{103948,    11983,    123478}
	};
	//dimensions of this array (also called a MATRIX) are 4 * 3 (4 rows and 3 columns)

	printSalesData(salesData);
}
