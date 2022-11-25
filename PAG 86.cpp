#include <iostream>

int main()
{
	enum class Color
	{
		red,
		blue	
	};
	
	Color color{ color::red };
	
	if (color == Color::red) // es correcto
		std::cout << "El color es rojo!\n";
	else if (color == Color::blue)
		std::cout << "El color es azul!\n";
	
	return 0;
}