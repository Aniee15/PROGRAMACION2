#include "constants.h"
#include <iostream>

int main()
{
	std::cout << "ingrese el radio: ";
	int radius{};
	std::cin >> radius;
	
	std::cout << "la circunferencia es: " << 2.0 * radius * constants::pi << '\n';
	
	return 0;
}