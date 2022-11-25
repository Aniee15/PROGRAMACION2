#include <iostream>

int main()
{
	int count{ 0 };
	while (true)
	{
		std::cout << "Ingrese 's' para salir del ciclo, otro caracter para continuar: "
		char ch{};
		std::cin >> ch;
		
		if (ch == 's')
			break;
		else
		{
			++count;
			std::cout<< "Hemos iterado " << count << " veces\n";
		}
	}
	
	return 0;
}