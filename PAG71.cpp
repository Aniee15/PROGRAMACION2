#include <iostream>

int main()
{
	std::cout << "ingresa un numero: ";
	int value {};
	std::cin >> value;
	
	if (value == 0 || value == 1)
		std::cout << "ingresaste 0 o 1\n";
	else
		std::cout << "no ingresaste 0 o 1\n";
	return 0;
}