#include <iostream> // std::cout

void dob()
{
	std::cout<<"en dob()\n";
}

void doa()
{
	std::cout<<"enn doa()\n";
	dob();
}

//definicion de la funcion main()
int main()
{
	std::cout<<"iniciando main()\n";
	doa();
	dob();
	std::cout<<"finalizando main()\n";
	return 0;
}
