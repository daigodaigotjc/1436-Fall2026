#include"StudentRelatedFunction.h"

#include <fstream>

vector<string> getAllStudentNames(string filename)
{
    ifstream fin(filename);

    if (fin.is_open() == false)
    {
        cout << filename << " was not found: " << endl;
        return {};
    }

    vector<string> allNames;
    string currentName;

    while (getline(fin, currentName))
    {
        //cout << currentName << "\n";
        allNames.push_back(currentName);
    }
    fin.close();
    
    return allNames;
}

string getLongestName(vector<string> names)
{
    string currentLargestName = "";
    for (int i = 0; i < names.size(); ++i)
    {
        if (names[i].length() > currentLargestName.length())
        {
            currentLargestName = names[i];
        }
    }

    return currentLargestName;
}

void demoASimpleArray()
{
    vector<string> groceryList =
    {
        "eggs",
        "tuna",
        "bacon",
        "tomato"

    };

    groceryList.push_back("figs");
    groceryList.push_back("milk");

    cout << "The size of the grocery list is: " << groceryList.size() << "\n";

    for (int index = 0; index < groceryList.size(); ++index)
    {
        cout << groceryList[index] << endl; //[] -> the "subscript" operator
    }

}