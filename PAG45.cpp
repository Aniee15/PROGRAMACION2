#include <iostream>

#define ENABLE_DEBUG // comenta para deshabilitar la depuracion

int getUserInput()
{
	#ifdef ENABLE_DEBUG
	std::Cerr<<"llamada a getUserInput () \n";
	#endif
	std::cout<<"ingrese un numero: ";
	int x{};
	std::cin>>x;
	return x;
}

int main()
{
	#ifdef ENABLE_DEBUG
	std::cer<<"llamada a main () \n";
	#endif
	int x{getUserInput()};
	std::cout<<"tu ingresaste: "<<x;
	
	return 0;
}
