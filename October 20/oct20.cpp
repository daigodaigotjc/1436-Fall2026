#include <iostream>

int main()
{
	std::cout << "Enter a shape type (only rectangle, circle, and cylinder are handled here):" << std::endl;

	std::string shape;
	std::cin >> shape;

	if (shape == "rectangle" || shape == "Rectangle")
	{
		float length;
		float width = 0.0f;

		std::cout << "Enter the length AND the width" << std::endl;
		std::cin >> length >> width;

		float area = length * width;

		std::cout << "The area of the rectangle is: " << area << std::endl;
	}

	else if (shape == "circle")
	{
		float radius = 0.0f;

		std::cout << "The area is: "
			<< 3.14 * radius * radius << std::endl;
	}

	else if (shape == "cylinder")
	{
		float radius = 0.0f;
		std::cout << "" << std::endl;
	}

	else
	{
		std::cout << "Unrecognized shape - try again?" << std::endl;
	}
}