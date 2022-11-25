#include <iostream>

int breakOrReturn()
{
	while (true)
	{
		std::cout << "Ingrese 's' para salir o 'r' para regresar: ";
		char ch;
		std::cin >> ch;
		
		if (ch == 's')
			break; // la ejecucion continuara en la primera declaracion mas alla del ciclo
			
		if (ch == 'r')
			return 1; // return hara que la funcion regrese inmediatamente a la persona que llama
	}
	std::cout << "Nos salimos del ciclo\n";
	return 0;
}

int main()
{
	int returnValue{ breakOrReturn() };
	std::cout << "Funmcion breakOrReturn regreso: " << returnValue << '\n';
	
	return 0;
}