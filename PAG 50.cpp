#include <iostream>
#include <cmath> // para std::sqrt()

int main()
{
	double x;
	tryAgain: // etiqueta de salto
	std::cout << "Ingrese un numero no negativo";
	std::cin >> x;
	
	if (x < 0.0)
		goto tryAgain; // aqui usamos el goto
		
	std::cout << "La raiz cuadrada de " << x << " es " << std::sqrt(X) << std::endl;
	return 0;
}