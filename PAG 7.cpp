#include <iostream>
#include <string>

int main()
{
	std::cout << "Ingrese su nombre completo: ";
	std::string name{};
	std::cin>>name;
	
	std::cout<<"Ingresa tu edad: ";
	std::string age{};
	std::cin>>age;
	
	std::cout<<"Tu nombre es "<<name<<" y tu edad es "<<age<<'\n';
	
	return 0;
}