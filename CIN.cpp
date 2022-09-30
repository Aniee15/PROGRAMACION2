#include <iostream> // para std::cout y std :: cin

int main()
{
	cout<<"introduzca un numero:"; // pedir al usuario un numero
	int x{}; // definir la variable x paracontener la entrada del usuario (e inicializarla a cero)
	cin>>x; // obtiene el numero del teclado y lo almacena en la variable x
	cout<<"ingresaste"<<x<<'\ n';
	return 0;
}
