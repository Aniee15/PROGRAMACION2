#include <iostream> // para std::cout

void dob()
{
	std::cout<<"en dob () \n";
}

void doa()
{
	std::cout<<"iniciando doa () \n";
	dob ();
	std::cout<<"finalizando doa () \n";
}

// definicion de la funcion main ()
int main()
{
	std::cout<<"iniciando main () \n";
	doa();
	std::cout<<"finalizando main () \n";
	return 0;
}
