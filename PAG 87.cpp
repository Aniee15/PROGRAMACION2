#include <iostream>

int main()
{
	enum class Color
	{
		red,
		blue	
	};
	
	Color color{ color::blue};
	
	std::cout << color; // no funciona porque no hay una conversion automatica
	std::cout << static_cast<int>(color); // imprimira 1
	
	return 0;
}