#include <iostream>
#include <cmath> // for std::sqrt()

void printSqrt(double value)
{
	if (value >= 0.0)
		std::cout << "La raiz cuadrada de " << value << " es " << std::sqrt(value) << '\n';
	else
		std::cout << "Error: " << value << " es negativo\n";
}