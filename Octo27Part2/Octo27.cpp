#include <iostream>
#include <vector>
#include <string>


//void demoPrintingAListOfGrade()
//{
//	std::vector<int> listOfGrades =
//	{
//		99,
//		100,
//		70,
//		0,
//		46
//	};
//
//	for (int locationInArray = 0; locationInArray < listOfGrades.size(); locationInArray++)
//	{
//		std::cout << listOfGrades[locationInArray] << " " << std::endl;
//	}
//
//	std::cout << std::endl;
//}

std::vector<std::string> makeToDoList()
{
	std::vector<std::string> toDoList;

	std::string done = "no";

	while (done != "yes")
	{
		std::cout << "Enter a thing on your to do list: " << std::endl;

		std::string newTask;
		std::getline(std::cin, newTask);

		toDoList.push_back(newTask);

		std::cout << "Are you done adding tasks?" << std::endl;
		std::getline(std::cin, done);
	}
	return toDoList;
}

void printTheList(std::vector<std::string> theList)
{
	for (int index = 0; index < theList.size(); ++index)
	{
		std::cout << "Item number " << index + 1 << " is: " << theList[index] << std::endl;
	}
}

int main()
{
	auto toDoList = makeToDoList();

	printTheList(toDoList);
}