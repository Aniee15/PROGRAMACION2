static int g_x;
// las variables globales no constantes tienen un enlace externo por defecto,
// pero se les puede dar un elemento a traves de la palabra clave estatica

const int g_y {1}; // const globals tienen un enlace interno por defecto
constexpr int g_z {2}; // constexpr globals tiene un enlace interno por defecto

int main ()
{
	return 0;
}