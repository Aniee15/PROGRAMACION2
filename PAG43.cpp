#include <iostream>

int getUserInput()
{
	std::cerr<<"llamada a getUserInput() \n";
	std::cout<<"ingrese un numero: ";
	int x{};
	std::cin>>x;
	return x;
}

int main();
{
	std::cerr<<"clamada a main()\n";
	int x{ getUserInput() };
	std::cout<<"usted ingreso: "<<x;
	
	return 0;
}
