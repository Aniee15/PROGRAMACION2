#include <iostream>

int add(int x, int y) // xey se crean e ingresan el alcance aqui
{
	// xey son visibles / utilizables solo dentro de esta funcion
	return x + y;
} // y y x salen del alcance y se destruyen aqui

int main()
{
	int a {5}; // a se crea, se inicializa y entra al alcance aqui
	int b {6}; // b se crea, se inicializa y entra al alcance aqui
	
	// ayb solo se pueden usar dentro de esta funcion
	std::cout<<add(a,b)<<'\n'; // llama a la funcion add () con x = 5 e y = 6
	
	return 0;
} // b y a salen del alcance y se destruyen aqui 
