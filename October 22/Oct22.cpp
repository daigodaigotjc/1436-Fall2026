// this program prompts the user for their birth date (in mm, dd, yyyy format)
//and it displays the user's age:
#include <iostream>
#include <vector>

//first approximation check -> this does NOT handle problematic dates such as November 31st or Fubruary 29 (leap year stuff)
bool isValidDate(int day, int month, int year)
{
	if (month < 0 || month > 12)
	{
		std::cout << "The month " << month << " is not valid (because it is NOT betwixt 1 and 12" << std::endl;
		return false;
	}


	int minimumPossibleDay = 1;
	int maximumPossibleDay = 31;
	if (day < minimumPossibleDay || day > maximumPossibleDay)
	{
		std::cout << "The Day " << day << " is not valid (because it is NOT betwixt "
			<< minimumPossibleDay << " and " << maximumPossibleDay << std::endl;
		return false;
	}

	if (year < 1909 || year > 2026)
	{
		std::cout << "Year " << year << " is invalid (because " << year << " is not betwixt 1909 and 2026" << std::endl;
		return false;
	}

	return true;
}

int calculateAge(int birthDay, int birthMonth, int birthYear, int currentDay, int currentMonth, int currentYear)
{
	int age = 0;

	if (currentMonth > birthMonth) {
		if (currentDay > birthDay)
		{
			age = currentYear - birthYear - 1;
		}
	}

	age = currentYear - birthYear;


	return age;
}



int main()
{
	int birthDay = 0, birthMonth = 0, birthYear = 0;

	while (isValidDate(birthDay, birthMonth, birthYear) == false)
	{
		std::cout << "Enter your birth day (ex: 5 if it is the 5th day of March): " << std::endl;
		std::cin >> birthDay;

		std::cout << "Enter your birth month (ex: 10 if October): " << std::endl;
		std::cin >> birthMonth;

		std::cout << "Enter your birth year (ex: 1986, 2007): " << std::endl;
		std::cin >> birthYear;
	}


	int currentDay = 22;
	int currentMonth = 10;
	int currentYear = 2026;

	int age = calculateAge(birthDay, birthMonth, birthYear, currentDay, currentMonth, currentYear);
	std::cout << "Your age is: " << age << std::endl;
	
}