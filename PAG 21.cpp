#include <iostream>

int main()
{
	std::cout << "Ingrese un entero: ";
	int x{};
	std::cin >> x;
	
	std::cout << "Ingrese otro entero: ";
	int y;
	std::cin >> y;
	
	if (x > 0 && y > 0) // && (y logico)
		std::cout << "ambos numeros son positivos\n";
	else if (x > 0 || y > 0) // || (o logico)
		std::cout << "Uno de los numeros es positivo\n";
	else 
		std::cout << "Ningun numero es positivo\n";
		
	return 0;
}