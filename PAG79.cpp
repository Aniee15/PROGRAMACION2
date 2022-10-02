#include <iomanip> // para std::setprecision()
#include <iostream>

int main()
{
	double d{0.1};
	std::cout << d << '\n'; // precision por default a 6
	std::cout << std::setprecision(17);
	std::cout << d << '\n';
	
	return 0;
}