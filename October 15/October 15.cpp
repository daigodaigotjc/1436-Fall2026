// October 15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    //int totalInches;
    //std::cout << "Enter your height in inches (NOT feet inches" << std::endl;
    //std::cin >> totalInches;

    //const int NUMBER_OF_INCHES_PER_FOOT = 12;
    //std::cout << totalInches << " is equal to  " << totalInches / NUMBER_OF_INCHES_PER_FOOT << " feet " << std::endl;

    //std::cout << " and " << totalInches % NUMBER_OF_INCHES_PER_FOOT << " inches " << std::endl;

    //int fisrtNumber = 5;
    //int secoundNumber = 3;

    //int product;

    //product = fisrtNumber * secoundNumber;

    //int someNumber = 15;

    //someNumber *= 2;



    float costPerGallon = 3.80f;

    float costToFillUp = 0.0f; //expect USD 1.99 (not 2)

    float numberOfGallonsInTank = 0.0f; // ex = 18 //Toyota Siena

    while (numberOfGallonsInTank <= 0)
    {
        std::cout << "How many gallons of gas does your car hold?" << std::endl;
        std::cin >> numberOfGallonsInTank;

    }

    costToFillUp = costPerGallon * numberOfGallonsInTank;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "It costs you " << costToFillUp 
        << " to fill up your tank" << std::endl;

    float mpg = 14;

    int numberOfMilesOnFullTank = numberOfGallonsInTank * mpg;

    std::cout << "The number of miles you can drive on a full tank is: " << numberOfMilesOnFullTank << std::endl;



}

