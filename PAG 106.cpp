int g_mode; // declarar variable global (se inicializara en cero de forma predeterminada)

void doSomething ()
{
	g_mode = 2; // establece la variable global g_mode en 2
}

int main ()
{
	g_mode = 1; // nota: esto establece la variable global g_mode en 1. No declara una variable local g_mode!
	
	doSomething();
	// el programador aun espera que g_mode sea 1
	// pero doSomething lo cambio a 2!
	
	if (g_mode == 1)
	std::cout << "No se detecto ninguna amenaza.\n";
	else
	std::cout << "Lanzamiento de misiles nucleares ... 3-2-1-Ahora \n";
	
	return 0;
}