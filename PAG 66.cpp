#include <iostream>

int main()
{
	int count{ 1 };
	while (count <= 50)
	{
		if (count <10)
		{
			std::cout << '0';
		}
		std::cout << count << ' ';
		
		// si la variable dle ciclo es divisible por 10, imprima un salto de linea
		if (count % 10 == 0)
		{
			std::cout << '\n';
		}
		++count;
	}
	
	return 0;
}