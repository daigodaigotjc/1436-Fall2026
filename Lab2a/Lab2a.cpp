#include <iostream>

int main()
{
    int totalInches;
    std::cout << "Enter your height in inches (NOT feet inches" << std::endl;
    std::cin >> totalInches;

    const int NUMBER_OF_INCHES_PER_FOOT = 12;
    std::cout << totalInches << " is equal to  " << totalInches / NUMBER_OF_INCHES_PER_FOOT << " feet " << std::endl;

    std::cout << " and " << totalInches % NUMBER_OF_INCHES_PER_FOOT << " inches " << std::endl;
}