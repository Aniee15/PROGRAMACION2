#include <iostream>
enum class Color
{
	black,
	white,
	red,
	green,
	blue
};

void printColor(Color color)
{
	if (color == Color::black)
		std::cout << "Black";
	else if (color == Color::white)
		std::cout << "White";
	else if (color == Color::red)
		std::cout << "Red";
	else if (color == Color::green)
		std::cout << "Green";
	else if (color == Color::blue)
		std::cout << "Blue";
	else
		std::cout << "Desconocido";
}
int main()
{
	printColor(Color::green);
	
	return 0;
}