#include <iostream>

unsigned int PRNG()
{
	// nuestra semilla inicial es 5323
	static unsigned int seed{ 5323 };
	
	// toma la semilla actual y genera un nuevo valor a partir de ella
	// debido a nuestro uso de grandes constantes y desbordamiento, seria
	// es dificil para alguien predecir casualmente cual es el proximo numeor
	// va a ser del anterior
	seed = 8253729 * seed + 2396403;
	
	// toma la semilla y devuelve un valor entre 0 y 32767
	return seed % 32768;
}

int main()
{
	// Imprime 100 numeros aleatorios
	for (int count { 1 }; count <= 100; ++count)
	{
		std::cout << PRNG() << '\t';
		
		// si imprimimos 5 numeros, comience una nueva fila 
		if (count % 5 == 0)
			std::cout <<'\n';
	}
	
	return 0;
}