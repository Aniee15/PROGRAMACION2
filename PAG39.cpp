#include <iostream>

int main()
{
	int x{ 1 };
	int y{ 2 };
	
	std::cout << (++x, ++y); // incrementar x (y) y, luego evalua el de la derecha
	
	return 0;
}