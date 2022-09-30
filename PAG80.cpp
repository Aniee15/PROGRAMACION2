#include <iostream>

int readNumber()
{
	std::cout<<"por favor ingrese un numero: ";
	int x{};
	std::cin>>x;
	return x;
}

void writeAnswer(int x)
{
	std::cout<<"el cociente es: "<<x;
}

int main()
{
	int x{ 0 };
	int y{ 0 };
	x = readNumber();
	x = readNumber();
	writeAnswer(x/y);
	
	return 0;
}
