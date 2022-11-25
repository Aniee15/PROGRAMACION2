#include <iostream>

int main()
{
	std::cout << "Ingrese 0 o 1: ";
	int x{};
	std::cin >> x;
	if (x = 0)
		std::cout << "Ingresaste 0";
	else 
		std::cout << "Ingresaste 1";
		
	return 0;
}