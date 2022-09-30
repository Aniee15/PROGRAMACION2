int add(int x, int y)
{
	return x + y;
}

int add(int x, int y) // violacion de ODR, ya hemos definido la funcion add
{
	return x + y;
}

int main()
{
	int x;
	int x; // violacion de ODR, ya hemos definido x
}
