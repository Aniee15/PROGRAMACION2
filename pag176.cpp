#include <cstdint>
#include <iostream>

int main()
{
	std::cout<<"¿ cual es tu edad?\n";
	
	std::uint8_t age{};
	std::cin>>age;
	
	std::cout<<" Se te permite manejar un auto en Sinaloa [";
	
	if (age>=18)
	std::cout<<"x";
	else
	std::cout<<" ";
	
	std::cout<<"]\n";
	
	return 0;
}