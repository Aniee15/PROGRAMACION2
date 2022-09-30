#include <iostream>

int agregar(int x,int y)
{
	return x - y; // se supone que la funcion debe agregar, pero no
}

int main()
{
	std::cout<<agregar(5,3); // deberia producir 8, pero produce 2
	
	return 0;
}
