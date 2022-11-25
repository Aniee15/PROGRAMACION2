struct Rectangle
{
	double lenght{ 1.0 };
	double width{ 1.0 };	
};

int main()
{
	Rectangle x; // lenght = 1.0, width = 1.0
	
	x.lenght = 2.0; // puedes asignar otros valores
	
	return 0;
}