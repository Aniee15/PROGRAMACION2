#include <iomanip> // para std::setprecision ()
#include <iostream>

int main()
{
	std::cout << std::setprecision (16); // muestra 16 digitos de precision
	std::cout << 3.3333333333333333f << '\n'; // f sufijo significa float
	std::cout << 3.333333333333333333 << '\n'; // sin sufijo significa double
	return 0;
}