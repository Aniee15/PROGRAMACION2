#include <iostream>

void doSomething ()
{
	std::cout<"hol! \n";
}

int main ()
{
	int x {0}; // la vida de x comienza aqui
	doSomething(); // x sigue vivo durante esta llamada a la funcion
	return 0;
} // la vida de x termina aqui
