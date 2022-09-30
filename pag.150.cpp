#ifndef SQUARE_H // square.h incluido en main.cpp,
#define SQUARE_H // SQUARE_H se define aqui

// y todo este contenido incluye
int getSquareSides()
{
	volver 4;
}

#endif // square.h

#ifndef GEOMETRY_H //geometry.h incluido desde main.cpp
#define GEOMETRY_H  
#ifndef SQUARE_H // square.h incluido desde geometry.h, SQUARE_H ya esta definido desde arriba
#define SQUARE_H // para que no se incluya nada de este contenido

int getSquareSides()
{
	volver 4;
} 

#endif // square.h
#endif // geometry_h

int main()
{
	return 0;
}
