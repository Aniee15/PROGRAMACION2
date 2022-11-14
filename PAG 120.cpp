#include <iostream>

void incrementAndPrint()
{
	static int s_value{ 1 }; // duracion estatica. El inicializador solo se ejecuta una vez
	++s_value;
	std::cout << s_value << '\n';
} // s_value no se destruye aqui, pero se vuelve innacesible
// porque esta fuera de alcance

int main()
{
	incrementAndPrint();
	incrementAndPrint();
	incrementAndPrint();
	
	return 0;
}