#include <iostream>

int mai()
{
	std::cout<<"joe \n";
	
#if 0 // no compile nada a partir de aqui
	std::cout<<"bob \n";
	std::cout<<"steve \n";
#endif // hasta este punto

	return 0;
}
