#include <iostream>

// void significa que la funcion no devulve un valor a la persona que llama
void retornoNada ()
{
	std::cout<<"hola"<<'\n';
	// esta funcion no devulve un valor, por lo que no se necesita una declaracion de devolucion 
}

int main ()
{
	returnNothing (); // bien: se llama a la funcion returnNothing (), no se devuelve ningun valor
	std::cout<<returnNothing (); // error: esta linea no se compilara. debera comentarlo para continuar.
	return 0;
}
