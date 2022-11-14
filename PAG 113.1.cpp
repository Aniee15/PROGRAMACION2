// deberia de usar esta forma
namespace constants
{
	const double gravity { 9.8 }; // vinculo interno, accesible solo desde este archivo
}
// esta funcion se puede exportar a otros archivos para acceder globalmente
double getGravity()
{
	return constants::gravity;
}