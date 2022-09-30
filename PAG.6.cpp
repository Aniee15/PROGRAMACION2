#include <iostream> // para std::cout

//definicion de la funcion definida por el usuario doprin ()
void doprin () // doprint () es la funcion llamada en este ejemplo
{
	std::cout<<"en doprint () \n";
}

// definicion de la funcion main ()
int main()
{
	std::cout<<"iniciando main () \n";
	doprint (); // interrumpe main () haciendo una llamada de funcion a doprint (). main () es la persona que llama.
	std::cout<<"finalizando main () \n"; // esta sentencia se ejecuta despues de que termine doprint ()
	
	return 0;
}
