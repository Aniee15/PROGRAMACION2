#include "constants.h"
#include <iostream>

int main()
{
	std::cout << "ingrese el radio: ";
	int radius{};
	std::cin >> radius;
	
	double circumference { 2.0 * radius * constants::pi };
	std::cout << "la circunferencia es: " << circunference << '\n';
	
	return 0;
}