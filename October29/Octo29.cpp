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

auto calculateAverageSales(std::vector < std::vector<int>> salesData)
{
	double averageSales = 0.0;

	double sum = 0.0;

	for (int row = 0; row < salesData.size(); ++row)
	{
		for (int column = 0; column < salesData[0].size(); ++column)
		{
			sum = sum + salesData[row][column];
		}
	}

	int totalDataPoints = salesData.size() * salesData[0].size();
	averageSales = sum / totalDataPoints;

	std::cout << "Sum of all sales: " << sum << std::endl;

	return averageSales;
}

int findMaxSalesInCertainRow(std::vector<std::vector<int>> salesData, int rowNumber)
{
	int maxSalesInCertainRow = 0;
	for (int column = 0; column < salesData[0].size(); ++column)
	{
		int currentSales = salesData[rowNumber][column];

		if (currentSales > maxSalesInCertainRow)
		{
			maxSalesInCertainRow = currentSales;

			std::cout << "Updated the max sale to " << maxSalesInCertainRow << std::endl;
		}
	}

	return maxSalesInCertainRow;
}


int main()
{
	std::vector<std::vector<int>> salesData =
	{
		//Jan. //Feb. //Mar.
		{1,    2,    3},
		{4,    5,	   6},
		{7,	   8,     9},
		{10,    11,    12}
	};
	//dimensions of this array (also called a MATRIX) are 4 * 3 (4 rows and 3 columns)

	printSalesData(salesData);

	findMaxSalesInCertainRow(salesData, 2);

	double averageSales = calculateAverageSales(salesData);

	std::cout << "Average sales: " << averageSales << std::endl;

	return 0;
}
