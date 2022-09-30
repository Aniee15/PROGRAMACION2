#include <iostream>

int getValueFromUser() // esta funcion ahora devuelve un valor entero
{
	std::cout<<"ingrese un entero:";
	int input{};
	std::cin>>entrada;
	
	retorno de entrada; // devulve el valor que el usuario ingreso
}

int main()
{
	int num{getValueFromUser()}; // inicializa num con el valor de retorno de getValueFromUser ()
	std::cout<<num<<"duplicado es:"<<num * 2<<'\n';
	return 0;
}
