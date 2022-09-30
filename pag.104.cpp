#include <iostream> // importa la declaracion de std::cout

using namespace std; // hace que std::cout sea accesible como "cout"

int cout () // declara nuestra propia funcion "cout"
{
	return 5;
}

int main()
{
	// error de compilacion! que cout queremos aqui? el del espacio de nombres estandar o el que definimos anteriormente?
	cout<<"hola, mundo!";
	
	return 0;
}
