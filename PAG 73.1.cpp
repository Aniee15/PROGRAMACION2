#include <iostream>

extern int g_x;
// este extern es una declaracion directa de una variable
// llamada g_x que esta definida en otro lugar
extern const int g_y;
// este extern es una declaracion directa de una
// variable constante llamada g_y que se define en otro lugar 

int main ()
{
	std::cout << g_x; // imprime 2
	
	return 0;	
}