#include <iostream>

int main()
{
	std::cout << "ingrese un entero: ";
	int x{};
	std::cin >> x;
	
	std::cout << "ingrese otro entero: ";
	int y{};
	std::cin >> y;
	
	if (x == y)
		std::cout << x << " igual " << y << '\n';
	if (x != y)
		std::cout << x << " no es igual "<< y << '\n';
	if (x > y)
		std::cout << x << " es mayor que "<< y <<'\n';
	if (x < y)
		std::cout << x << " es menor que " << y << '\n';
	if (x >= y)
		std::cout << x << " es mayor o igual que " << y <<'\n';
	if (x <= y)
		std::cout << x << " es menor o igual que "<< y << '\n';
		
	return 0; 
}