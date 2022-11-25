#include <iostream>
#include <cstdlib>
#include <ctime>  // std::time()

int main()
{
	//// establecer el valor de semilla inicial con el reloj del sistema
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	
	for (int count{ 1 }; count <= 100; ++coutn)
	{
		std::cout << std::rand() << '\t';
		
		if (count % 5 == 0)
			std::cout << '\n';
	}
	
	return 0;
}