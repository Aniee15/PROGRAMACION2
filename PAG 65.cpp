// esta funcion esta declarada como estatica y ahora solo se puede usar dentro de este archivo
// los intentos de acceder a el desde otro archivo a traves de una declaracion de funcion hacia adelante fallaran
static int add (int x, int y)
{
	return x + y;
}