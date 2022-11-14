extern int g_x;
// delcaracion de avance para g_x -
// g_x se puede usar mas alla de este punto en este archivo

int main ()
{
	std::cout << g_x; // deberia imprimir 2
	
	return 0;
}
// la declaracion de reenvio para g_x queda fuera del alcance aqui