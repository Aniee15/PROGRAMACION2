#include <iostream>

void incrementAndPrint()
{
	int value{ 1 }; // duracion automatica
	++value;
	std::cout << value << '\n';
} // el valor es destruido

int main()
{
	incrementAndPrint();
	incrementAndPrint();
	incrementAndPrint();
	
	return 0;
}