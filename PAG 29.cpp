#include <iostream>
#include <string>

int main()
{
	std::string firstName{};
	std::string lastName{};
	
	std::cout << "Nombre: ";
	std::cin >> fisrtName;
	
	std::cout << "Apellido: "'
	std::cin >> lastName;
	
	if (std::string fullName{ firtsName + ' ' + lastName }; fullName.lenght() > 20)
	{
		std::cout << '"' << fullname << "\"es demsaiado largo\n";
	}
	else
	{
		std::cout << "Tu nombre es " << fullName << '\n';
	}
	
	// aqui ya no se ocupa la varaible @fullName
	
	return 0;
}