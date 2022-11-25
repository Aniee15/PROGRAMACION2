struct Rectangle
{
	double lenght{ 1.0 }; // inicializacion miembro no estatico
	double width{ 1.0 };	
};

int main()
{
	Rectangle x{ 2.0, 2.0 }; // inicializacion uniforme
	
	return 0;
}