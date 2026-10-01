#include"StudentRelatedFunction.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<string> allStudentNames = getAllStudentNames("studentRoster.csv");

	//for (int i = 0; i < allStudentNames.size(); ++i)
	//{
	//	cout << allStudentNames[i] << endl;
	//}

	cout << "Longest name in list is: " << getLongestName(allStudentNames);
}

