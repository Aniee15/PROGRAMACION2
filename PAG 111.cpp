#include <iostream>
#include <cstdlib> // para std::rand() y std::srand()

int main()
{
	std::srand(5323);
	std::rand();
	
	for (int count { 1 }; count <= 100; ++count)
	{
		std::cout << std::rand () << '\t';
		
		if (count % 5 == 0)
			std::cout << '\n';
	}
	
	return 0;
}