int g_x {2}; // los globales no constantes son externos por defecto

extern const int g_y {3}; // const globals se puede definir como externs
extern constexpr int g_z {3};
// constexpr globals se puede definir como extern, haciendolos externos
// (pero esto es inutil, lo veremos enseguida)

int main ()
{
	return 0;
}